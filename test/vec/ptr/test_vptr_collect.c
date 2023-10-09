/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vptr_collect.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:48:17 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 15:26:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>
#include <stdio.h>

#include "vptr_create.h"
#include "vptr_destroy.h"
#include "vptr_destroy_data.h"
#include "vptr_append.h"
#include "vptr_collect.h"
#include "str_create.h"
#include "str_destroy.h"
#include "safe_free.h"
#include "s_str.h"

static void	vstr_destroy(void *_Nonnull ptr)
{
	str_destroy(ptr);
}

TestSuite(vptr_collect, .timeout = 1);

Test(vptr_collect, vptr_collect_simple)
{
	t_vptr	*vptr;
	t_cstr	*collect;
	size_t	index;

	vptr = vptr_create(t_cstr, 8);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	vptr_append(vptr, "test1");
	vptr_append(vptr, "test2");
	vptr_append(vptr, "test3");
	vptr_append(vptr, "test4");
	vptr_append(vptr, "test5");
	vptr_append(vptr, "test6");
	vptr_append(vptr, "test7");
	vptr_append(vptr, "test8");

	cr_assert_eq(vptr->len, 8);

	collect = (t_cstr *)vptr_collect(vptr);

	cr_assert_not_null(collect);
	cr_assert_str_eq(collect[0], "test1");
	cr_assert_str_eq(collect[1], "test2");
	cr_assert_str_eq(collect[2], "test3");
	cr_assert_str_eq(collect[3], "test4");
	cr_assert_str_eq(collect[4], "test5");
	cr_assert_str_eq(collect[5], "test6");
	cr_assert_str_eq(collect[6], "test7");
	cr_assert_str_eq(collect[7], "test8");

	vptr_destroy(vptr);

	index = 0;
	while (collect[index] != NULL)
	{
		safe_free(collect[index]);
		index++;
	}
	safe_free(collect);
}

Test(vptr_collect, vptr_collect_struct)
{
	t_vptr	*vptr;
	t_str	**collect;
	size_t	index;
	
	vptr = vptr_create(t_cstr, 8);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	vptr_append(vptr, str_create("test1"));
	vptr_append(vptr, str_create("test2"));
	vptr_append(vptr, str_create("test3"));
	vptr_append(vptr, str_create("test4"));
	vptr_append(vptr, str_create("test5"));
	vptr_append(vptr, str_create("test6"));
	vptr_append(vptr, str_create("test7"));
	vptr_append(vptr, str_create("test8"));

	cr_assert_eq(vptr->len, 8);

	collect = (t_str **)vptr_collect(vptr);

	cr_assert_not_null(collect);
	cr_assert_str_eq(collect[0]->get, "test1");
	cr_assert_str_eq(collect[1]->get, "test2");
	cr_assert_str_eq(collect[2]->get, "test3");
	cr_assert_str_eq(collect[3]->get, "test4");
	cr_assert_str_eq(collect[4]->get, "test5");
	cr_assert_str_eq(collect[5]->get, "test6");
	cr_assert_str_eq(collect[6]->get, "test7");
	cr_assert_str_eq(collect[7]->get, "test8");

	vptr_destroy_data(vptr, &vstr_destroy);

	index = 0;
	while (collect[index] != NULL)
	{
		safe_free(collect[index]);
		index++;
	}
	safe_free(collect);
}

Test(vptr_collect, vptr_collect_empty)
{
	t_vptr	*vptr;
	t_cstr	*collect;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	collect = (t_cstr *)vptr_collect(vptr);

	cr_assert_not_null(collect);
	cr_assert_null(collect[0]);

	vptr_destroy(vptr);
	safe_free(collect);
}

Test(vptr_collect, vptr_collect_null)
{
	t_vptr	*_null;

	_null = NULL;
	cr_assert_null(_null);
	cr_assert_null(vptr_collect(_null));
}

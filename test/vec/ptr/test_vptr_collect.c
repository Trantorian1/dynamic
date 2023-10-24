/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vptr_collect.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:48:17 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 14:49:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>
#include <stdio.h>

#include "vptr_create.h"
#include "vptr_destroy.h"
#include "vptr_append.h"
#include "vptr_collect.h"
#include "str_create.h"
#include "str_destroy.h"
#include "safe_free.h"
#include "pointerof.h"
#include "s_str.h"

TestSuite(vptr_collect, .timeout = 1);

Test(vptr_collect, vptr_collect_simple)
{
	t_vptr	*vptr;
	t_cstr	*collect;

	vptr = vptr_create(t_cstr, 8);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	vptr_append(vptr, pointerof(t_cstr, "test1"));
	vptr_append(vptr, pointerof(t_cstr, "test2"));
	vptr_append(vptr, pointerof(t_cstr, "test3"));
	vptr_append(vptr, pointerof(t_cstr, "test4"));
	vptr_append(vptr, pointerof(t_cstr, "test5"));
	vptr_append(vptr, pointerof(t_cstr, "test6"));
	vptr_append(vptr, pointerof(t_cstr, "test7"));
	vptr_append(vptr, pointerof(t_cstr, "test8"));

	cr_assert_eq(vptr->len, 8);

	collect = vptr_collect(t_cstr, vptr);

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

	safe_free(collect);
}

Test(vptr_collect, vptr_collect_empty)
{
	t_vptr	*vptr;
	t_cstr	*collect;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	collect = vptr_collect(t_cstr, vptr);

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
	cr_assert_null(vptr_collect(t_cstr, _null));
}

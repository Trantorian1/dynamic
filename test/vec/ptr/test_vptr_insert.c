/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vptr_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:14:53 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 16:26:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "vptr_create.h"
#include "vptr_destroy.h"
#include "vptr_append.h"
#include "vptr_insert.h"
#include "vptr_get.h"
#include "pointerof.h"
#include "s_str.h"

TestSuite(vptr_insert, .timeout = 1);

Test(vptr_insert, vptr_insert_simple)
{
	t_vptr	*vptr;

	vptr = vptr_create(t_cstr, 4);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	vptr_append(vptr, pointerof(t_cstr, "test1"));
	vptr_append(vptr, pointerof(t_cstr, "test3"));
	vptr_append(vptr, pointerof(t_cstr, "test5"));
	vptr_append(vptr, pointerof(t_cstr, "test7"));

	cr_assert_eq(vptr->len, 4);

	vptr_insert(vptr, pointerof(t_cstr, "test2"), 1);
	vptr_insert(vptr, pointerof(t_cstr, "test4"), 3);
	vptr_insert(vptr, pointerof(t_cstr, "test6"), 5);
	vptr_insert(vptr, pointerof(t_cstr, "test8"), 7);

	cr_assert_eq(vptr->len, 8);

	cr_assert_str_eq(vptr_get(t_cstr, vptr, 0), "test1");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 1), "test2");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 2), "test3");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 3), "test4");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 4), "test5");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 5), "test6");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 6), "test7");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 7), "test8");

	vptr_destroy(vptr);
}

Test(vptr_insert, vptr_insert_empty)
{
	t_vptr	*vptr;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	vptr_insert(vptr, pointerof(t_cstr, "test1"), 0);

	cr_assert_eq(vptr->len, 1);
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 0), "test1");

	vptr_destroy(vptr);
}

Test(vptr_insert, vptr_insert_null)
{
	t_vptr	*vptr;
	t_vptr	*_vnull;
	t_cstr	*_null;

	vptr = vptr_create(t_cstr, 0);
	_null = NULL;
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);
	cr_assert_null(_null);
	cr_assert_null(vptr_insert(vptr, _null, 0));

	_vnull = NULL;
	cr_assert_null(_vnull);
	cr_assert_null(vptr_insert(_vnull, "test1", 0));

	vptr_destroy(vptr);
}

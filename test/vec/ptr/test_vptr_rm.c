/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vptr_rm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:54:45 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 17:04:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "vptr_create.h"
#include "vptr_destroy.h"
#include "vptr_append.h"
#include "vptr_rm.h"
#include "vptr_get.h"
#include "pointerof.h"
#include "s_str.h"

TestSuite(vptr_rm, .timeout = 1);

Test(vptr_rm, vptr_rm_start)
{
	t_vptr	*vptr;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	vptr_append(vptr, pointerof(t_cstr, "start"));
	vptr_append(vptr, pointerof(t_cstr, "middle"));
	vptr_append(vptr, pointerof(t_cstr, "end"));

	cr_assert_eq(vptr->len, 3);

	vptr_rm(vptr, 0);

	cr_assert_eq(vptr->len, 2);
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 0), "middle");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 1), "end");

	vptr_destroy(vptr);
}

Test(vptr_rm, vptr_rm_middle)
{
	t_vptr	*vptr;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	vptr_append(vptr, pointerof(t_cstr, "start"));
	vptr_append(vptr, pointerof(t_cstr, "middle"));
	vptr_append(vptr, pointerof(t_cstr, "end"));

	cr_assert_eq(vptr->len, 3);

	vptr_rm(vptr, 1);

	cr_assert_eq(vptr->len, 2);
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 0), "start");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 1), "end");

	vptr_destroy(vptr);
}

Test(vptr_rm, vptr_rm_end)
{
	t_vptr	*vptr;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	vptr_append(vptr, pointerof(t_cstr, "start"));
	vptr_append(vptr, pointerof(t_cstr, "middle"));
	vptr_append(vptr, pointerof(t_cstr, "end"));

	cr_assert_eq(vptr->len, 3);

	vptr_rm(vptr, 2);

	cr_assert_eq(vptr->len, 2);
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 0), "start");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 1), "middle");

	vptr_destroy(vptr);
}

Test(vptr_rm, vptr_rm_inv)
{
	t_vptr	*vptr;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	vptr_append(vptr, pointerof(t_cstr, "test"));
	vptr_rm(vptr, 2);

	cr_assert_eq(vptr->len, 1);

	vptr_destroy(vptr);
}

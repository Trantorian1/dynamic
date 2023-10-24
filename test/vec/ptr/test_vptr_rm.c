/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vptr_rm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:15:47 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 16:32:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "vptr_create.h"
#include "vptr_destroy.h"
#include "vptr_append.h"
#include "vptr_get.h"
#include "vptr_rm.h"
#include "s_str.h"
#include "pointerof.h"

TestSuite(vptr_rm, .timeout = 1);

Test(vptr_rm, vptr_rm_start)
{
	t_vptr	*vptr;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);

	vptr_append(vptr, pointerof(t_cstr, "0"));
	vptr_append(vptr, pointerof(t_cstr, "1"));
	vptr_append(vptr, pointerof(t_cstr, "2"));
	cr_assert_eq(vptr->len, 3);

	cr_assert_not_null(vptr_rm(vptr, 0));

	cr_assert_str_eq(vptr_get(t_cstr, vptr, 0), "1");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 1), "2");
	cr_assert_eq(vptr->len, 2);

	vptr_destroy(vptr);
}

Test(vptr_rm, vptr_rm_middle)
{
	t_vptr	*vptr;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);

	vptr_append(vptr, pointerof(t_cstr, "0"));
	vptr_append(vptr, pointerof(t_cstr, "1"));
	vptr_append(vptr, pointerof(t_cstr, "2"));
	cr_assert_eq(vptr->len, 3);

	cr_assert_not_null(vptr_rm(vptr, 1));

	cr_assert_str_eq(vptr_get(t_cstr, vptr, 0), "0");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 1), "2");
	cr_assert_eq(vptr->len, 2);

	vptr_destroy(vptr);
}

Test(vptr_rm, vptr_rm_end)
{
	t_vptr	*vptr;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);

	vptr_append(vptr, pointerof(t_cstr, "0"));
	vptr_append(vptr, pointerof(t_cstr, "1"));
	vptr_append(vptr, pointerof(t_cstr, "2"));
	cr_assert_eq(vptr->len, 3);

	cr_assert_not_null(vptr_rm(vptr, 2));

	cr_assert_str_eq(vptr_get(t_cstr, vptr, 0), "0");
	cr_assert_str_eq(vptr_get(t_cstr, vptr, 1), "1");
	cr_assert_eq(vptr->len, 2);

	vptr_destroy(vptr);
}

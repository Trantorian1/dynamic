/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vptr_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:10:53 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 13:58:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "vptr_create.h"
#include "vptr_destroy.h"
#include "vptr_last.h"
#include "vptr_append.h"
#include "s_str.h"
#include "pointerof.h"

TestSuite(vptr_last, .timeout = 1);

Test(vptr_last, vptr_last_simple)
{
	t_vptr	*vptr;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);

	vptr_append(vptr, pointerof(t_cstr, "first"));
	vptr_append(vptr, pointerof(t_cstr, "middle"));
	vptr_append(vptr, pointerof(t_cstr, "last"));

	cr_assert_str_eq(vptr_last(t_cstr, vptr), "last");
	vptr_destroy(vptr);
}

Test(vptr_last, vptr_last_empty)
{
	t_vptr	*vptr;

	vptr = vptr_create(t_cstr, 0);
	cr_assert_not_null(vptr);

	cr_assert_null(vptr_last(t_cstr, vptr));
	vptr_destroy(vptr);
}

Test(vptr_last, vptr_last_null)
{
	t_vptr	*vptr;

	vptr = NULL;
	cr_assert_null(vptr);

	cr_assert_null(vptr_last(t_cstr, vptr));
	vptr_destroy(vptr);
}

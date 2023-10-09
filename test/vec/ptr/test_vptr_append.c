/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vptr_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:58:19 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:47:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "vptr_create.h"
#include "vptr_destroy.h"
#include "vptr_append.h"
#include "vptr_get.h"
#include "s_str.h"

TestSuite(vec_ptr_append, .timeout = 1);

Test(vec_ptr_append, vec_ptr_append_simple)
{
	t_cstr	*input = (t_cstr []) { "input1", "input2", "input3", "input4", NULL };
	t_vptr	*vptr;
	size_t	index;
	size_t	pad_front_prev;
	size_t	pad_back_prev;

	vptr = vptr_create(t_cstr, 4);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	pad_front_prev = vptr->_pad_front;
	pad_back_prev = vptr->_pad_back;

	index = 0;
	while (input[index] != NULL)
	{
		cr_assert_not_null(vptr_append(vptr, input[index]));
		index++;
	}
	
	cr_assert_eq(vptr->len, index);
	cr_assert_eq(vptr->_pad_front, pad_front_prev);
	cr_assert_eq(vptr->_pad_back, pad_back_prev - index);

	index = 0;
	while (input[index] != NULL)
	{
		cr_assert_str_eq((char *)vptr_get(vptr, index), input[index]);
		index++;
	}

	vptr_destroy(vptr);
}

Test(vec_ptr_append, vec_ptr_append_force_append)
{
	t_cstr	*input = (t_cstr []) {
		"1", "2", "3", "4", "5", "6", "7", "8", "9", "10",
		"11", "12", "13", "14", "15", "16", "17", NULL
	};
	t_vptr	*vptr;
	size_t	pad_front_prev;
	size_t	index;

	vptr = vptr_create(t_cstr, 15);
	cr_assert_not_null(vptr);
	cr_assert_eq(vptr->len, 0);

	pad_front_prev = vptr->_pad_front;
	index = 0;
	while (input[index] != NULL)
	{
		cr_assert_not_null(vptr_append(vptr, input[index]));
		index++;
	}

	cr_assert_eq(vptr->len, index);
	cr_assert_eq(vptr->_pad_front, pad_front_prev);
	cr_assert_eq(vptr->_len, VEC_PTR_LEN_MIN * 2);

	index = 0;
	while (input[index] != NULL)
	{
		cr_assert_str_eq(vptr_get(vptr, index), input[index]);
		index++;
	}

	vptr_destroy(vptr);
}

Test(vec_ptr_append, vec_ptr_append_null)
{
	t_vptr	*_null;

	_null = NULL;
	cr_assert_null(_null);
	cr_assert_null(vptr_append(_null, ""));
	vptr_destroy(_null);
}

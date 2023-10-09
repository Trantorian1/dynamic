/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vptr_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:36:44 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:39:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "vptr_create.h"
#include "vptr_destroy.h"
#include "s_str.h"

TestSuite(vec_ptr_create, .timeout = 1);

Test(vec_ptr_create, vec_ptr_create_simple)
{
	static size_t	size = 7;
	t_vptr			*vptr;
	size_t			_pad_front;

	vptr = vptr_create(t_cstr, size);
	cr_assert_not_null(vptr);

	_pad_front = (VEC_PTR_LEN_MIN - size) / 2;

	cr_assert_eq(vptr->_len, VEC_PTR_LEN_MIN);
	cr_assert_eq(vptr->_pad_front, _pad_front);
	cr_assert_eq(vptr->_pad_back, VEC_PTR_LEN_MIN - _pad_front - size);
	cr_assert_eq(vptr->_elem_size, sizeof(t_cstr));
	cr_assert_eq(vptr->len, 0);
	
	vptr_destroy(vptr);
}

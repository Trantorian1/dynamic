/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_prepend_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:57:30 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 11:08:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "str_create.h"
#include "str_destroy.h"
#include "str_prepend_str.h"

TestSuite(str_prepend_str, .timeout = 1);

Test(str_prepend_str, str_prepend_str_simple)
{
	t_str	*str;
	size_t	pad_front_prev;
	size_t	pad_back_prev;
	size_t	len_prev;

	str = str_create("rld");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->get, "rld");

	pad_front_prev = str->_pad_front;
	pad_back_prev = str->_pad_back;
	len_prev = str->_len;

	str_prepend_str(str, "Wo");
	cr_assert_str_eq(str->get, "World");
	cr_assert_eq(str->len, 5);
	cr_assert_eq(str->_pad_front, pad_front_prev - 2);
	cr_assert_eq(str->_pad_back, pad_back_prev);
	cr_assert_eq(str->_len, len_prev);

	str_destroy(str);
}

Test(str_prepend_str, str_prepend_str_force_grow)
{
	t_str	*str;
	size_t	pad_back_prev;

	str = str_create("World");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->get, "World");

	pad_back_prev = str->_pad_back;

	str_prepend_str(str, "Hello ");
	cr_assert_str_eq(str->get, "Hello World");
	cr_assert_eq(str->len, 11);
	cr_assert_eq(str->_pad_back, pad_back_prev);
	cr_assert_eq(str->_len, STR_LEN_MIN * 2);

	str_destroy(str);
}

Test(str_prepend_str, str_prepend_str_null)
{
	t_str	*str;
	t_str	*_null_str;
	t_cstr	_null_cstr;

	str = str_create("test");
	_null_cstr = NULL;

	cr_assert_not_null(str);
	cr_assert_null(_null_cstr);
	cr_assert_null(str_prepend_str(str, _null_cstr));

	_null_str = NULL;
	cr_assert_null(_null_cstr);
	cr_assert_null(str_prepend_str(_null_str, ""));

	str_destroy(str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_append_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:19:37 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 10:32:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "str_create.h"
#include "str_destroy.h"
#include "str_append_str.h"
#include "s_str.h"

TestSuite(str_append_str, .timeout = 1);

Test(str_append_str, str_append_str_simple)
{
	t_str	*str;
	size_t	pad_front_prev;
	size_t	pad_back_prev;
	size_t	len_prev;

	str = str_create("Hello");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->get, "Hello");

	pad_front_prev = str->_pad_front;
	pad_back_prev = str->_pad_back;
	len_prev = str->_len;

	str_append_str(str, " World");

	cr_assert_str_eq(str->get, "Hello World");
	cr_assert_eq(str->len, 11);
	cr_assert_eq(str->_pad_front, pad_front_prev);
	cr_assert_eq(str->_pad_back, pad_back_prev - 6);
	cr_assert_eq(str->_len, len_prev);

	str_destroy(str);
}

Test(str_append_str, str_append_str_empty)
{
	t_str	*str;
	size_t	pad_front_prev;

	str = str_create("");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->get, "");

	pad_front_prev = str->_pad_front;
	str_append_str(str, "Hello World");

	cr_assert_str_eq(str->get, "Hello World");
	cr_assert_eq(str->len, 11);
	cr_assert_eq(str->_pad_front, pad_front_prev);
	cr_assert_eq(str->_len, STR_LEN_MIN * 2);

	str_destroy(str);
}

Test(str_append_str, str_append_str_force_grow)
{
	t_str	*str;
	size_t	pad_front_prev;

	str = str_create("123456789012345");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->get, "123456789012345");

	pad_front_prev = str->_pad_front;
	str_append_str(str, "67");

	cr_assert_str_eq(str->get, "12345678901234567");
	cr_assert_eq(str->len, 17);
	cr_assert_eq(str->_pad_front, pad_front_prev);
	cr_assert_eq(str->_len, STR_LEN_MIN * 2);

	str_destroy(str);
}

Test(str_append_str, str_append_str_null)
{
	t_str	*str;
	t_str	*_null_str;
	t_cstr	_null_cstr;

	_null_str = NULL;
	cr_assert_null(_null_str);
	cr_assert_null(str_append_str(_null_str, ""));

	str = str_create("test");
	_null_cstr = NULL;
	cr_assert_not_null(str);
	cr_assert_null(_null_cstr);
	cr_assert_null(str_append_str(str, _null_cstr));

	str_destroy(str);
}

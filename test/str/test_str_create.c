/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:25:43 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 09:39:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

#include "str_create.h"
#include "str_destroy.h"
#include "s_str.h"

TestSuite(str_create, .timeout = 1);

Test(str_create, str_create_simple)
{
	t_str	*str;

	str = str_create("Hello World");
	cr_assert_not_null(str);

	cr_assert_str_eq(str->get, "Hello World");
	cr_assert_eq(str->len, 11);
	cr_assert_eq(str->_len, STR_LEN_MIN);
	cr_assert_eq(str->_start, str->get - str->_pad_front);
	cr_assert_eq(str->_pad_front, (STR_LEN_MIN - 11) / 2);
	cr_assert_eq(str->_pad_back, STR_LEN_MIN - 11 - str->_pad_front);
	cr_assert_eq(str->_pad_front + str->len + str->_pad_back, str->_len);

	str_destroy(str);
}

Test(str_create, str_create_empty)
{
	t_str	*str;

	str = str_create("");
	cr_assert_not_null(str);

	cr_assert_str_eq(str->get, "");
	cr_assert_eq(str->len, 0);
	cr_assert_eq(str->_len, STR_LEN_MIN);
	cr_assert_eq(str->_start, str->get - str->_pad_front);
	cr_assert_eq(str->_pad_front, STR_LEN_MIN / 2);
	cr_assert_eq(str->_pad_back, STR_LEN_MIN - str->_pad_front);
	cr_assert_eq(str->_pad_front + str->len + str->_pad_back, str->_len);

	str_destroy(str);
}

Test(str_create, str_create_limit)
{
	t_str	*str;

	str = str_create("1234567890123456");
	cr_assert_not_null(str);

	cr_assert_str_eq(str->get, "1234567890123456");
	cr_assert_eq(str->len, 16);
	cr_assert_eq(str->_len, STR_LEN_MIN * 2);
	cr_assert_eq(str->_start, str->get - str->_pad_front);
	cr_assert_eq(str->_pad_front, (STR_LEN_MIN * 2 - 16) / 2);
	cr_assert_eq(str->_pad_back, STR_LEN_MIN * 2 - 16 - str->_pad_front);
	cr_assert_eq(str->_pad_front + str->len + str->_pad_back, str->_len);

	str_destroy(str);
}

Test(str_create, str_create_null)
{
	t_str	*str;
	t_cstr	_null;

	_null = NULL;
	cr_assert_null(_null);

	str = str_create(_null);
	cr_assert_null(str);

	str_destroy(str);
}

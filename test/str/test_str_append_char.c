/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_append_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:40:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 10:18:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "str_create.h"
#include "str_destroy.h"
#include "str_append_char.h"

TestSuite(str_append_char, .timeout = 1);

Test(str_append_char, str_append_char_simple)
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
	len_prev = str->len;

	str_append_char(str, ' ');
	str_append_char(str, 'W');
	str_append_char(str, 'o');
	str_append_char(str, 'r');
	str_append_char(str, 'l');
	str_append_char(str, 'd');

	cr_assert_str_eq(str->get, "Hello World");
	cr_assert_eq(str->_pad_front, pad_front_prev);
	cr_assert_eq(str->_pad_back, pad_back_prev - 6);
	cr_assert_eq(str->len, len_prev + 6);
	cr_assert_eq(str->_len, STR_LEN_MIN);

	str_destroy(str);
}

Test(str_append_char, str_append_char_empty)
{
	t_str	*str;
	size_t	pad_front_prev;

	str = str_create("");

	cr_assert_not_null(str);
	cr_assert_str_eq(str->get, "");

	pad_front_prev = str->_pad_front;

	str_append_char(str, 'H');
	str_append_char(str, 'e');
	str_append_char(str, 'l');
	str_append_char(str, 'l');
	str_append_char(str, 'o');
	str_append_char(str, ' ');
	str_append_char(str, 'W');
	str_append_char(str, 'o');
	str_append_char(str, 'r');
	str_append_char(str, 'l');
	str_append_char(str, 'd');

	cr_assert_str_eq(str->get, "Hello World");
	cr_assert_eq(str->_pad_front, pad_front_prev);
	cr_assert_eq(str->len, 11);
	cr_assert_eq(str->_len, STR_LEN_MIN * 2);

	str_destroy(str);
}

Test(str_append_char, str_append_char_force_grow)
{
	t_str	*str;
	size_t	pad_front_prev;

	str = str_create("123456789012345");

	cr_assert_not_null(str);
	cr_assert_str_eq(str->get, "123456789012345");
	cr_assert_eq(str->_len, STR_LEN_MIN);

	pad_front_prev = str->_pad_front;
	str_append_char(str, '6');
	str_append_char(str, '7');

	cr_assert_str_eq(str->get, "12345678901234567");
	cr_assert_eq(str->_pad_front, pad_front_prev);
	cr_assert_eq(str->len, 17);
	cr_assert_eq(str->_len, STR_LEN_MIN * 2);

	str_destroy(str);
}

Test(str_append_char, str_append_char_null)
{
	t_str	*_null;

	_null = NULL;
	cr_assert_null(_null);

	cr_assert_null(str_append_char(_null, 'a'));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_prepend_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:32:59 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 10:55:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "str_create.h"
#include "str_destroy.h"
#include "str_prepend_char.h"

TestSuite(str_prepend_char, .timeout = 1);

Test(str_prepend_char, str_prepend_char_simple)
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

	str_prepend_char(str, 'o');
	str_prepend_char(str, 'W');

	cr_assert_str_eq(str->get, "World");
	cr_assert_eq(str->len, 5);
	cr_assert_eq(str->_pad_front, pad_front_prev - 2);
	cr_assert_eq(str->_pad_back, pad_back_prev);
	cr_assert_eq(str->_len, len_prev);

	str_destroy(str);
}

Test(str_prepend_char, str_prepend_char_force_grow)
{
	t_str	*str;
	size_t	pad_back_prev;

	str = str_create("World");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->get, "World");

	pad_back_prev = str->_pad_back;

	str_prepend_char(str, ' ');
	str_prepend_char(str, 'o');
	str_prepend_char(str, 'l');
	str_prepend_char(str, 'l');
	str_prepend_char(str, 'e');
	str_prepend_char(str, 'H');

	cr_assert_str_eq(str->get, "Hello World");
	cr_assert_eq(str->len, 11);
	cr_assert_eq(str->_pad_back, pad_back_prev);
	cr_assert_eq(str->_len, STR_LEN_MIN * 2);

	str_destroy(str);
}

Test(str_prepend_char, str_prepend_char_null)
{
	t_str	*_null;

	_null = NULL;
	cr_assert_null(_null);
	cr_assert_null(str_prepend_char(_null, 'a'));
}

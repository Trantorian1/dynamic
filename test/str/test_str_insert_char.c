/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_insert_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:13:12 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 10:14:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "str_create.h"
#include "str_destroy.h"
#include "str_insert_char.h"

TestSuite(str_insert_char, .timeout = 1);

Test(str_insert_char, str_insert_char_simple)
{
	t_str	*str;
	size_t	len_prev;

	str = str_create("Wld");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->get, "Wld");
	
	len_prev = str->_len;

	str_insert_char(str, 'o', 1);
	str_insert_char(str, 'r', 2);

	cr_assert_str_eq(str->get, "World");
	cr_assert_eq(str->len, 5);
	cr_assert_eq(str->_len, len_prev);

	str_destroy(str);
}

Test(str_insert_char, str_insert_char_force_grow)
{
	t_str	*str;

	str = str_create("123456781234567");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->get, "123456781234567");
	cr_assert_eq(str->_len, STR_LEN_MIN);
	
	str_insert_char(str, '9', 8);
	str_insert_char(str, '0', 9);

	cr_assert_str_eq(str->get, "12345678901234567");
	cr_assert_eq(str->len, 17);
	cr_assert_eq(str->_len, STR_LEN_MIN * 2);

	str_destroy(str);
}

Test(str_insert_char, str_insert_char_null)
{
	t_str	*_null;

	_null = NULL;
	cr_assert_null(_null);
	cr_assert_null(str_insert_char(_null, 'a', 0));
}

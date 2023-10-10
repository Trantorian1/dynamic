/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_insert_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:24:39 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 09:40:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "str_create.h"
#include "str_destroy.h"
#include "str_insert_str.h"

TestSuite(str_insert_str, .timeout = 1);

Test(str_insert_str, str_insert_str_simple)
{
	t_str	*str;
	size_t	len_prev;

	str = str_create("Wld");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->_start, "Wld");

	len_prev = str->_len;

	str_insert_str(str, "or", 1);
	cr_assert_str_eq(str->_start, "World");
	cr_assert_eq(str->len, 5);
	cr_assert_eq(str->_len, len_prev);

	str_destroy(str);
}

Test(str_insert_str, str_insert_str_force_grow)
{
	t_str	*str;

	str = str_create("123456781234567");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->_start, "123456781234567");
	cr_assert_eq(str->_len, STR_LEN_MIN);

	str_insert_str(str, "90", 8);
	cr_assert_str_eq(str->_start, "12345678901234567");
	cr_assert_eq(str->_len, STR_LEN_MIN * 2);

	str_destroy(str);
}

Test(str_insert_str, str_insert_str_null)
{
	t_str	*str;
	t_str	*_null_str;
	t_cstr	_null_cstr;

	str = str_create("test");
	_null_cstr = NULL;
	cr_assert_not_null(str);
	cr_assert_null(_null_cstr);
	cr_assert_null(str_insert_str(str, _null_cstr, 0));

	_null_str = NULL;
	cr_assert_null(_null_str);
	cr_assert_null(str_insert_str(_null_str, "", 0));

	str_destroy(str);
}

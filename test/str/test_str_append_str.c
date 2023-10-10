/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_append_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:19:37 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 13:01:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>
#include <stdio.h>

#include "str_create.h"
#include "str_destroy.h"
#include "str_append_str.h"
#include "s_str.h"

TestSuite(str_append_str, .timeout = 1);

Test(str_append_str, str_append_str_simple)
{
	t_str	str;
	size_t	len_prev;

	str = str_create("Hello");
	cr_assert_str_eq(str._start, "Hello");

	len_prev = str._len;

	str_append_str(&str, " World");

	cr_assert_str_eq(str._start, "Hello World");
	cr_assert_eq(str.len, 11);
	cr_assert_eq(str._len, len_prev);

	str_destroy(&str);
}

Test(str_append_str, str_append_str_empty)
{
	t_str	str;

	str = str_create("");
	cr_assert_str_eq(str._start, "");
	cr_assert_eq(str._len, STR_LEN_MIN);

	str_append_str(&str, "Hello There World");

	cr_assert_str_eq(str._start, "Hello There World");
	cr_assert_eq(str.len, 17);
	cr_assert_eq(str._len, STR_LEN_MIN * 2);

	str_destroy(&str);
}

Test(str_append_str, str_append_str_force_grow)
{
	t_str	str;

	str = str_create("123456789012345");
	cr_assert_str_eq(str._start, "123456789012345");

	str_append_str(&str, "67");

	cr_assert_str_eq(str._start, "12345678901234567");
	cr_assert_eq(str.len, 17);
	cr_assert_eq(str._len, STR_LEN_MIN * 2);

	str_destroy(&str);
}

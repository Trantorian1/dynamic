/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_find_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:08:51 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 13:30:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "str_create.h"
#include "str_destroy.h"
#include "str_find_char.h"

TestSuite(str_find_char, .timeout = 1);

Test(str_find_char, str_find_char_start)
{
	t_str	str;

	str = str_create("Hello World");
	cr_assert_str_eq(str.get, "Hello World");

	cr_assert_eq(str_find_char(str, 'H'), 0);
	str_destroy(&str);
}

Test(str_find_char, str_find_char_middle)
{
	t_str	str;

	str = str_create("Hello World");
	cr_assert_str_eq(str.get, "Hello World");

	cr_assert_eq(str_find_char(str, 'o'), 4);
	str_destroy(&str);
}

Test(str_find_char, str_find_char_end)
{
	t_str	str;

	str = str_create("Hello World");
	cr_assert_str_eq(str.get, "Hello World");

	cr_assert_eq(str_find_char(str, 'd'), 10);
	str_destroy(&str);
}

Test(str_find_char, str_find_char_missing)
{
	t_str	str;

	str = str_create("Hello World");
	cr_assert_str_eq(str.get, "Hello World");

	cr_assert_eq(str_find_char(str, 'x'), 11);
	str_destroy(&str);
}

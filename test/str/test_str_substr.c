/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_substr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:16:25 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 09:38:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "str_create.h"
#include "str_destroy.h"
#include "str_substr.h"

TestSuite(str_substr, .timeout = 1);

Test(str_substr, str_substr_beggining)
{
	t_str	*str;
	t_str	*substr;

	str = str_create("Hello World");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->_start, "Hello World");

	substr = str_substr(str, 0, 5);
	str_destroy(str);

	cr_assert_not_null(substr);
	cr_assert_str_eq(substr->_start, "Hello");
	cr_assert_eq(substr->len, 5);
	str_destroy(substr);
}

Test(str_substr, str_substr_middle)
{
	t_str	*str;
	t_str	*substr;

	str = str_create("Hello World");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->_start, "Hello World");

	substr = str_substr(str, 3, 7);
	str_destroy(str);

	cr_assert_not_null(substr);
	cr_assert_str_eq(substr->_start, "lo W");
	cr_assert_eq(substr->len, 4);
	str_destroy(substr);
}

Test(str_substr, str_substr_end)
{
	t_str	*str;
	t_str	*substr;

	str = str_create("Hello World");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->_start, "Hello World");

	substr = str_substr(str, 6, 11);
	str_destroy(str);

	cr_assert_not_null(substr);
	cr_assert_str_eq(substr->_start, "World");
	cr_assert_eq(substr->len, 5);
	str_destroy(substr);
}

Test(str_substr, str_substr_empty)
{
	t_str	*str;
	t_str	*substr;

	str = str_create("");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->_start, "");

	substr = str_substr(str, 0, 0);
	str_destroy(str);

	cr_assert_not_null(substr);
	cr_assert_str_eq(substr->_start, "");
	cr_assert_eq(substr->len, 0);
	str_destroy(substr);
}

Test(str_substr, str_substr_inv)
{
	t_str	*str;

	str = str_create("Hello World");
	cr_assert_not_null(str);
	cr_assert_str_eq(str->_start, "Hello World");

	cr_assert_null(str_substr(str, 1, 0));
	cr_assert_null(str_substr(str, 0, (size_t)(-1)));
	str_destroy(str);
}

Test(str_substr, str_substr_null)
{
	t_str	*_null;

	_null = NULL;
	cr_assert_null(_null);
	cr_assert_null(str_substr(_null, 0, 0));
}

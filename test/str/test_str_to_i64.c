/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_to_i64.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:38:04 by marvin            #+#    #+#             */
/*   Updated: 2023/11/13 18:22:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

#include "str_to_i64.h"

#include <stdint.h>

#include "str_create.h"
#include "str_destroy.h"

TestSuite(str_to_i64, .timeout = 1);

Test(str_to_i64, str_to_i64_positive)
{
	t_str	source;
	uint8_t	err_code;
	int64_t	result;

	source = str_create("0");
	err_code = str_to_i64(source, &result);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, 0, "got:%ld expected:%ld", result, 0L);
	str_destroy(&source);

	source = str_create("10");
	err_code = str_to_i64(source, &result);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, 10, "got:%ld expected:%ld", result, 10L);
	str_destroy(&source);

	source = str_create("10000");
	err_code = str_to_i64(source, &result);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, 10000, "got:%ld expected:%ld", result, 10000L);
	str_destroy(&source);

	source = str_create("124");
	err_code = str_to_i64(source, &result);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, 124, "got:%ld expected:%ld", result, 124L);
	str_destroy(&source);

	source = str_create("7");
	err_code = str_to_i64(source, &result);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, 7, "got:%ld expected:%ld", result, 7L);
	str_destroy(&source);

	source = str_create("8589934592");
	err_code = str_to_i64(source, &result);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, 8589934592, "got:%ld expected:%ld", result, 8589934592L);
	str_destroy(&source);
}

Test(str_to_i64, str_to_i64_negative)
{
	t_str	source;
	uint8_t	err_code;
	int64_t	result;

	source = str_create("-0");
	err_code = str_to_i64(source, &result);
	str_destroy(&source);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, -0, "got:%ld expected:%ld", result, 0L);

	source = str_create("-10");
	err_code = str_to_i64(source, &result);
	str_destroy(&source);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, -10, "got:%ld expected:%ld", result, -10L);

	source = str_create("-10000");
	err_code = str_to_i64(source, &result);
	str_destroy(&source);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, -10000, "got:%ld expected:%ld", result, -10000L);

	source = str_create("-124");
	err_code = str_to_i64(source, &result);
	str_destroy(&source);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, -124, "got:%ld expected:%ld", result, -124L);

	source = str_create("-7");
	err_code = str_to_i64(source, &result);
	str_destroy(&source);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, -7, "got:%ld expected:%ld", result, -7L);

	source = str_create("-8589934592");
	err_code = str_to_i64(source, &result);
	str_destroy(&source);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, -8589934592, "got:%ld expected:%ld", result, -8589934592L);
}

Test(str_to_i64, str_to_i64_limit)
{
	t_str	source;
	uint8_t	err_code;
	int64_t	result;

	source = str_create("9223372036854775807");
	err_code = str_to_i64(source, &result);
	str_destroy(&source);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, INT64_MAX, "got:%ld expected:%ld", result, INT64_MAX);

	source = str_create("-9223372036854775808");
	err_code = str_to_i64(source, &result);
	str_destroy(&source);

	cr_assert_eq(err_code, EXIT_SUCCESS);
	cr_assert_eq(result, INT64_MIN, "got:%ld expected:%ld", result, INT64_MIN);

	source = str_create("9223372036854775808");
	err_code = str_to_i64(source, &result);
	str_destroy(&source);

	cr_assert_eq(err_code, EXIT_FAILURE);
	cr_assert_eq(result, 0, "got:%ld expected:%ld", result, 0L);

	source = str_create("-9223372036854775809");
	err_code = str_to_i64(source, &result);
	str_destroy(&source);

	cr_assert_eq(err_code, EXIT_FAILURE);
	cr_assert_eq(result, 0, "got:%ld expected:%ld", result, 0L);
}

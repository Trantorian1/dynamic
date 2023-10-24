/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_rm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:06:37 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 16:17:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "str_create.h"
#include "str_destroy.h"
#include "str_rm.h"

TestSuite(str_rm, .timeout = 1);

Test(str_rm, str_rm_start)
{
	t_str	str;

	str = str_create("Hello World");
	cr_assert_str_eq(str.get, "Hello World");

	str_rm(&str, 0, 6);
	cr_assert_str_eq(str.get, "World");

	str_destroy(&str);
}

Test(str_rm, str_rm_middle)
{
	t_str	str;

	str = str_create("Hello There World");
	cr_assert_str_eq(str.get, "Hello There World");

	str_rm(&str, 6, 12);
	cr_assert_str_eq(str.get, "Hello World");

	str_destroy(&str);
}

Test(str_rm, str_rm_end)
{
	t_str	str;

	str = str_create("Hello World");
	cr_assert_str_eq(str.get, "Hello World");

	str_rm(&str, 5, 11);
	cr_assert_str_eq(str.get, "Hello");

	str_destroy(&str);
}

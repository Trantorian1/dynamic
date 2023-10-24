/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cstr_find_cstr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:59:18 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 11:42:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "cstr_find_cstr.h"

TestSuite(cstr_find_cstr, .timeout = 1);

Test(cstr_find_cstr, cstr_find_cstr_simple)
{
	cr_assert_eq(cstr_find_cstr("Hello World", "World"), 6);
	cr_assert_eq(cstr_find_cstr("Hello World", "Hello"), 0);
	cr_assert_eq(cstr_find_cstr("Hello World", "lo Wo"), 3);
	cr_assert_eq(cstr_find_cstr("Hello World", "ld"), 9);
}

Test(cstr_find_cstr, cstr_find_cstr_single)
{
	cr_assert_eq(cstr_find_cstr("Hello World", "H"), 0);
	cr_assert_eq(cstr_find_cstr("Hello World", "d"), 10);
	cr_assert_eq(cstr_find_cstr("Hello World", "l"), 2);
	cr_assert_eq(cstr_find_cstr("Hello World", "o"), 4);
}

Test(cstr_find_cstr, cstr_find_cstr_none)
{
	cr_assert_eq(cstr_find_cstr("Hello World", ""), 11);
	cr_assert_eq(cstr_find_cstr("Hello World", "z"), 11);
	cr_assert_eq(cstr_find_cstr("Hello World", "Worldy"), 11);
	cr_assert_eq(cstr_find_cstr("Hello World", "Hello Worldy"), 11);
}

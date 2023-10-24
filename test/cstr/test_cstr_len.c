/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:22:13 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 09:24:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

#include "cstr_len.h"
#include "s_str.h"

TestSuite(cstr_len, .timeout = 1);

Test(cstr_len, cstr_len_simple)
{
	cr_assert_eq(cstr_len("Hello World"), 11);
}

Test(cstr_len, cstr_len_empty)
{
	cr_assert_eq(cstr_len(""), 0);
}

Test(cstr_len, cstr_len_null)
{
	t_cstr	_null;

	_null = NULL;
	cr_assert_null(_null);

	cr_assert_eq(cstr_len(_null), 0);
}

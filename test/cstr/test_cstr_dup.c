/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cstr_dup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:18:38 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 09:20:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

#include "cstr_dup.h"
#include "safe_free.h"
#include "s_str.h"

TestSuite(cstr_dup, .timeout = 1);

Test(cstr_dup, cstr_dup_simple)
{
	t_cstr	cstr;

	cstr = cstr_dup("Hello World");

	cr_assert_not_null(cstr);
	cr_assert_str_eq(cstr, "Hello World");

	safe_free(cstr);
}

Test(cstr_dup, cstr_dup_null)
{
	t_cstr	cstr;
	t_cstr	_null;

	_null = NULL;
	cr_assert_null(_null);

	cstr = cstr_dup(_null);
	cr_assert_null(cstr);

	safe_free(cstr);
}

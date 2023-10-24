/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cstr_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:09:29 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 09:17:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

#include "cstr_alloc.h"
#include "safe_free.h"
#include "s_str.h"

TestSuite(cstr_alloc, .timeout = 1);

Test(cstr_alloc, cstr_alloc_simple)
{
	t_cstr	cstr;

	cstr = cstr_alloc(11);
	cr_assert_not_null(cstr);

	cr_assert_eq(cstr[0], '\0');
	cr_assert_eq(cstr[11], '\0');

	cstr[0] = 'H';
	cstr[1] = 'e';
	cstr[2] = 'l';
	cstr[3] = 'l';
	cstr[4] = 'o';
	cstr[5] = ' ';
	cstr[6] = 'W';
	cstr[7] = 'o';
	cstr[8] = 'r';
	cstr[9] = 'l';
	cstr[10] = 'd';

	cr_assert_str_eq(cstr, "Hello World");
	safe_free(cstr);
}

Test(cstr_alloc, cstr_alloc_empty)
{
	t_cstr	cstr;

	cstr = cstr_alloc(0);

	cr_assert_not_null(cstr);
	cr_assert_str_eq(cstr, "");

	safe_free(cstr);
}

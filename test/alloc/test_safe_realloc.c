/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_safe_realloc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 08:48:22 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 08:59:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

#include "safe_alloc.h"
#include "safe_realloc.h"
#include "safe_free.h"
#include "s_str.h"

TestSuite(safe_realloc, .timeout = 1);

Test(safe_realloc, realloc_simple)
{
	t_cstr	alloc;

	alloc = safe_alloc(6);
	cr_assert_not_null(alloc);

	alloc[0] = 'H';
	alloc[1] = 'e';
	alloc[2] = 'l';
	alloc[3] = 'l';
	alloc[4] = 'o';
	alloc[5] = '\0';

	cr_assert_str_eq(alloc, "Hello");
	alloc = safe_realloc(alloc, 12);
	cr_assert_not_null(alloc);

	alloc[5] = ' ';
	alloc[6] = 'W';
	alloc[7] = 'o';
	alloc[8] = 'r';
	alloc[9] = 'l';
	alloc[10] = 'd';
	alloc[11] = '\0';

	cr_assert_str_eq(alloc, "Hello World");

	safe_free(alloc);
}

Test(safe_realloc, realloc_inv_bytes)
{
	t_cstr	alloc;

	alloc = safe_alloc(6);
	cr_assert_not_null(alloc);

	alloc[0] = 'H';
	alloc[1] = 'e';
	alloc[2] = 'l';
	alloc[3] = 'l';
	alloc[4] = 'o';
	alloc[5] = '\0';

	cr_assert_str_eq(alloc, "Hello");
	alloc = safe_realloc(alloc, 0);

	cr_assert_not_null(alloc);
	cr_assert_str_eq(alloc, "Hello");

	safe_free(alloc);
}

Test(safe_realloc, realloc_inv_ptr)
{
	t_cstr	alloc;
	t_cstr	_null;

	_null = NULL;
	cr_assert_null(_null);

	alloc = safe_realloc(_null, 6);
	cr_assert_not_null(alloc);

	alloc[0] = 'H';
	alloc[1] = 'e';
	alloc[2] = 'l';
	alloc[3] = 'l';
	alloc[4] = 'o';
	alloc[5] = '\0';

	cr_assert_str_eq(alloc, "Hello");

	safe_free(alloc);
}

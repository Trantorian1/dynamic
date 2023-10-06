/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_safe_free_all.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:04:02 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 09:07:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

#include "safe_alloc.h"
#include "safe_free_all.h"
#include "safe_free.h"
#include "s_str.h"

TestSuite(safe_free_all, .timeout = 1);

Test(safe_free_all, free_all_simple)
{
	t_cstr	alloc1;
	t_cstr	alloc2;
	t_cstr	alloc3;

	alloc1 = safe_alloc(12);
	alloc2 = safe_alloc(0);
	alloc3 = safe_alloc(8);

	cr_assert_not_null(alloc1);
	cr_assert_not_null(alloc2);
	cr_assert_not_null(alloc3);

	alloc1 = NULL;
	alloc2 = NULL;
	alloc3 = NULL;

	safe_free_all();
}

Test(safe_free_all, free_all_none)
{
	t_cstr	alloc1;
	t_cstr	alloc2;
	t_cstr	alloc3;

	alloc1 = safe_alloc(12);
	alloc2 = safe_alloc(0);
	alloc3 = safe_alloc(8);

	cr_assert_not_null(alloc1);
	cr_assert_not_null(alloc2);
	cr_assert_not_null(alloc3);

	safe_free(alloc1);
	safe_free(alloc2);
	safe_free(alloc3);
	safe_free_all();
}

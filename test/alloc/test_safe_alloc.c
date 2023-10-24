/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_safe_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:40:38 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 16:23:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

#include "safe_alloc.h"
#include "safe_free.h"

#include "s_str.h"
#include "s_cell.h"

TestSuite(safe_alloc, .timeout = 1);

Test(safe_alloc, test_basic)
{
	t_cstr	alloc1;
	t_cstr	alloc2;
	t_cstr	alloc3;
	t_cell	*cell1;
	t_cell	*cell2;
	t_cell	*cell3;

	alloc1 = safe_alloc(12);
	alloc2 = safe_alloc(0);
	alloc3 = safe_alloc(8);

	cr_assert_not_null(alloc1);
	cr_assert_not_null(alloc2);
	cr_assert_not_null(alloc3);

	cell1 = ((t_cell *)(void *)alloc1) - 1;
	cell2 = ((t_cell *)(void *)alloc2) - 1;
	cell3 = ((t_cell *)(void *)alloc3) - 1;

	cr_assert_eq(cell1->prev, NULL);
	cr_assert_eq(cell1->next, cell2);
	cr_assert_eq(cell1->bytes, 12);

	cr_assert_eq(cell2->prev, cell1);
	cr_assert_eq(cell2->next, cell3);
	cr_assert_eq(cell2->bytes, 0);

	cr_assert_eq(cell3->prev, cell2);
	cr_assert_eq(cell3->next, NULL);
	cr_assert_eq(cell3->bytes, 8);
	cr_assert_eq(cell3, g_tail);

	safe_free(alloc1);
	safe_free(alloc2);
	safe_free(alloc3);
}

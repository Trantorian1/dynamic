/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vstr_collect.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:46:07 by marvin            #+#    #+#             */
/*   Updated: 2023/10/25 00:53:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "vptr_create.h"
#include "vptr_destroy.h"
#include "vptr_get.h"
#include "vstr_append.h"
#include "vstr_destroy.h"
#include "str_create.h"
#include "safe_free.h"
#include "vstr_collect.h"

TestSuite(vstr_collect, .timeout = 1);

Test(vstr_collect, vstr_collect_simple)
{
	t_vptr	*vstr;
	t_cstr	*collect;
	size_t	index;

	vstr = vptr_create(t_str, 0);
	cr_assert_not_null(vstr);

	vstr_append(vstr, str_create("test"));
	vstr_append(vstr, str_create("hi"));
	vstr_append(vstr, str_create("world"));

	cr_assert_eq(vstr->len, 3);
	
	collect = vstr_collect(vstr);
	cr_assert_not_null(collect);

	index = 0;
	while (index < vstr->len)
	{
		cr_assert_str_eq(collect[index], vptr_get(t_str, vstr, index).get);
		index++;
	}
	cr_assert_null(collect[index]);

	safe_free(collect);
	vstr_destroy(vstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vstr_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 04:21:15 by marvin            #+#    #+#             */
/*   Updated: 2023/10/25 04:27:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "str_create.h"
#include "vptr_create.h"
#include "vptr_get.h"
#include "vstr_destroy.h"
#include "vstr_append.h"
#include "vstr_replace.h"

TestSuite(vstr_replace, .timeout = 1);

Test(vstr_replace, vstr_replace_simple)
{
	t_vptr	*vstr;

	vstr = vptr_create(t_str, 0);
	cr_assert_not_null(vstr);

	vstr_append(vstr, str_create("one"));
	vstr_append(vstr, str_create("two"));
	vstr_append(vstr, str_create("three"));
	vstr_append(vstr, str_create("four"));

	vstr_replace(vstr, str_create("Leeeeroyyyy Jenkins"), 1);
	cr_assert_str_eq(vptr_get(t_str, vstr, 1).get, "Leeeeroyyyy Jenkins");

	vstr_destroy(vstr);
}

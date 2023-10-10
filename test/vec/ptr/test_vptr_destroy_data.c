/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vptr_destroy_data.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:07:11 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 13:26:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <stddef.h>

#include "vptr_create.h"
#include "vptr_destroy_data.h"
#include "vptr_append.h"
#include "vptr_get.h"
#include "str_create.h"
#include "str_destroy.h"

TestSuite(vptr_destroy_data, .timeout = 1);

// static void	vstr_destroy(void *_Nonnull ptr)
// {
// 	str_destroy(ptr);
// }
//
// Test(vptr_destroy_data, vptr_destroy_data_simple)
// {
// 	t_vptr	*vptr;
//
// 	vptr = vptr_create(t_str, 8);
// 	cr_assert_not_null(vptr);
// 	cr_assert_eq(vptr->len, 0);
//
// 	vptr_append(vptr, (t_str *)str_create("1"));
// 	vptr_append(vptr, (t_str *)str_create("2"));
// 	vptr_append(vptr, (t_str *)str_create("3"));
// 	vptr_append(vptr, (t_str *)str_create("4"));
// 	vptr_append(vptr, (t_str *)str_create("5"));
// 	vptr_append(vptr, (t_str *)str_create("6"));
// 	vptr_append(vptr, (t_str *)str_create("7"));
// 	vptr_append(vptr, (t_str *)str_create("8"));
//
// 	cr_assert_eq(vptr->len, 8);
//
// 	cr_assert_str_eq(((t_str *)vptr_get(vptr, 0))->get, "1");
// 	cr_assert_str_eq(((t_str *)vptr_get(vptr, 1))->get, "2");
// 	cr_assert_str_eq(((t_str *)vptr_get(vptr, 2))->get, "3");
// 	cr_assert_str_eq(((t_str *)vptr_get(vptr, 3))->get, "4");
// 	cr_assert_str_eq(((t_str *)vptr_get(vptr, 4))->get, "5");
// 	cr_assert_str_eq(((t_str *)vptr_get(vptr, 5))->get, "6");
// 	cr_assert_str_eq(((t_str *)vptr_get(vptr, 6))->get, "7");
// 	cr_assert_str_eq(((t_str *)vptr_get(vptr, 7))->get, "8");
//
// 	vptr_destroy_data(vptr, &vstr_destroy);
// }

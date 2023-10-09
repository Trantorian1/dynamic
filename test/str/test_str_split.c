/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:20:33 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 13:27:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <criterion/parameterized.h>
#include <stddef.h>
#include <stdio.h>

#include "str_create.h"
#include "str_destroy.h"
#include "str_split.h"
#include "vptr_get.h"
#include "vptr_destroy_data.h"

typedef struct s_param
{
	t_cstr _Nonnull				input;
	t_cstr _Nonnull				pattern;
	t_cstr _Nonnull *_Nullable	split;
}	t_param;

static t_param	g_params[] = {
	// TEST: simple split
	{
		.input = "section1\nsection2\nsection3",
		.pattern = "\n",
		.split = (t_cstr []) {
			"section1",
			"section2",
			"section3",
			NULL
		}
	},
	// TEST: empty split
	{
		.input = "",
		.pattern = "\n",
		.split = (t_cstr []) {
			NULL
		}
	},
	// TEST: only pattern
	{
		.input = "\n\n\n",
		.pattern = "\n",
		.split = (t_cstr []) {
			NULL
		}
	},
	// TEST: advanced split
	{
		.input = "\n\n\ntest\nhere\n\n\n\nhello\n\nworld\n\n\n\n\n\n",
		.pattern = "\n",
		.split = (t_cstr []) {
			"test",
			"here",
			"hello",
			"world",
			NULL
		}
	},
};

static void	vstr_destroy(void *_Nonnull ptr)
{
	str_destroy(ptr);
}

TestSuite(str_split, .timeout = 1);

ParameterizedTestParameters(str_split, str_split_test)
{
	size_t	nb_params;

	nb_params = sizeof(g_params) / sizeof(*g_params);
	return (cr_make_param_array(t_param, g_params, nb_params));
}

ParameterizedTest(
	t_param *param,
	str_split,
	str_split_test
) {
	t_str	*str;
	t_vptr	*split;
	size_t	index;
	t_str	*str_curr;

	str = str_create(param->input);
	split = str_split(str, param->pattern);
	cr_assert_not_null(split);

	index = 0;
	while (param->split[index] != NULL)
	{
		str_curr = vptr_get(split, index);
		cr_assert_not_null(str_curr);
		cr_assert_str_eq(str_curr->get, param->split[index]);

		index++;
	}

	cr_assert_eq(split->len, index);

	str_destroy(str);
	vptr_destroy_data(split, &vstr_destroy);
}

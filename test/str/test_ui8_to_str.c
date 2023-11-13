/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ui8_to_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:45:52 by marvin            #+#    #+#             */
/*   Updated: 2023/11/13 11:54:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

#include <stdint.h>
#include "ui8_to_str.h"
#include "str_destroy.h"

TestSuite(ui8_to_str, .timeout = 1);

Test(ui8_to_str, ui8_to_str_simple)
{
	uint8_t	n;
	t_str	result;

	n = 0;
	result = ui8_to_str(n);
	cr_assert_str_eq(result.get, "0");
	str_destroy(&result);

	n = 7;
	result = ui8_to_str(n);
	cr_assert_str_eq(result.get, "7");
	str_destroy(&result);

	n = 10;
	result = ui8_to_str(n);
	cr_assert_str_eq(result.get, "10");
	str_destroy(&result);

	n = 128;
	result = ui8_to_str(n);
	cr_assert_str_eq(result.get, "128");
	str_destroy(&result);

	n = UINT8_MAX;
	result = ui8_to_str(n);
	cr_assert_str_eq(result.get, "255");
	str_destroy(&result);
}

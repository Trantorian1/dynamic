/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_safe_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:25:55 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 17:19:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>

#include "safe_alloc.h"
#include "safe_free.h"
#include "s_str.h"

TestSuite(safe_free, .timeout = 1);

Test(safe_free, simple_free)
{
	t_cstr	alloc1;
	t_cstr	alloc2;
	t_cstr	alloc3;

	alloc1 = safe_alloc(12);
	alloc2 = safe_alloc(0);
	alloc3 = safe_alloc(8);

	safe_free(alloc1);
	safe_free(alloc2);
	safe_free(alloc3);
}

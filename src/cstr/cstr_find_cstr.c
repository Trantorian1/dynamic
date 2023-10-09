/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_find_cstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:34:07 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 11:41:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstr_find_cstr.h"

#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "cstr_len.h"
#include "dyn_memcmp.h"

size_t	cstr_find_cstr(t_cstr _Nonnull cstr_a, t_cstr _Nonnull cstr_b)
{
	size_t	len_a;
	size_t	len_b;
	size_t	index;

	if (cstr_a == NULL || cstr_b == NULL)
		return (cstr_len(cstr_a));

	len_a = cstr_len(cstr_a);
	len_b = cstr_len(cstr_b);

	if (len_b > len_a || len_b == 0)
		return (len_a);

	index = 0;
	while (len_a - index - len_b > 0)
	{
		if (dyn_memcmp(cstr_a + index, cstr_b, len_b) == 0)
			return (index);
		index++;
	}

	if (dyn_memcmp(cstr_a + index, cstr_b, len_b) == 0)
		return (index);

	return (len_a);
}

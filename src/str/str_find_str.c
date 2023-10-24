/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_find_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:28:25 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 13:32:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_find_str.h"

#include "cstr_len.h"
#include "dyn_memcmp.h"

size_t	str_find_str(t_str str, t_cstr _Nonnull target)
{
	size_t	len_b;
	size_t	index;

	if (target == NULL)
		return (str.len);

	len_b = cstr_len(target);

	if (len_b > str.len || len_b == 0)
		return (str.len);

	index = 0;
	while (str.len - index - len_b > 0)
	{
		if (dyn_memcmp(str.get + index, target, len_b) == 0)
			return (index);
		index++;
	}

	if (dyn_memcmp(str.get + index, target, len_b) == 0)
		return (index);

	return (str.len);
}

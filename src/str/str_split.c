/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:52:21 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 12:52:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_split.h"

#include <stddef.h>

#include "vptr_create.h"
#include "vptr_append.h"
#include "cstr_len.h"
#include "cstr_find_cstr.h"
#include "str_substr.h"

t_vptr *_Nullable	str_split(t_str str, t_cstr _Nonnull pattern)
{
	t_vptr	*split;
	size_t	len;
	size_t	i_prev;
	size_t	i_curr;
	t_str	tmp;

	if (pattern == NULL)
		return (NULL);

	split = vptr_create(t_str, 8);
	len = cstr_len(pattern);
	i_curr = 0;

	while (i_curr < str.len)
	{	
		i_prev = i_curr;
		i_curr = cstr_find_cstr(str._start + i_curr, pattern);

		if (i_curr != i_prev)
		{
			tmp = str_substr(str, i_prev, i_curr);
			vptr_append(split, &tmp);
		}

		i_curr += len;
	}

	return (split);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:52:21 by marvin            #+#    #+#             */
/*   Updated: 2023/10/11 14:36:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_split.h"

#include <stddef.h>

#include "vptr_create.h"
#include "vptr_append.h"
#include "cstr_len.h"
#include "cstr_find_cstr.h"
#include "str_substr.h"
#include "pointerof.h"

t_vptr *_Nullable	str_split(t_str str, t_cstr _Nonnull pattern)
{
	t_vptr	*split;
	size_t	len;
	size_t	prev;
	size_t	curr;

	if (pattern == NULL)
		return (NULL);

	split = vptr_create(t_str, 8);
	len = cstr_len(pattern);
	curr = 0;

	while (curr < str.len)
	{	
		prev = curr;
		curr += cstr_find_cstr(str.get + curr, pattern);

		if (curr != prev)
			vptr_append(split, pointerof(t_str, str_substr(str, prev, curr)));

		curr += len;
	}

	return (split);
}

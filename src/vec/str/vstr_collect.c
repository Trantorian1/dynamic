/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr_collect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 00:40:54 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 14:56:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vstr_collect.h"

#include "safe_alloc.h"
#include "vptr_get.h"

t_cstr _Nonnull *_Nullable	vstr_collect(t_vptr *_Nonnull vstr)
{
	t_cstr	*collect;
	size_t	index;

	if (vstr == NULL || vstr->len == 0)
		return ((t_cstr[]){NULL});
	collect = safe_alloc(sizeof(*collect) * (vstr->len + 1));
	index = 0;
	while (index < vstr->len)
	{
		collect[index] = (*(t_str *)vptr_get(vstr, index)).get;
		index++;
	}
	collect[index] = NULL;
	return (collect);
}

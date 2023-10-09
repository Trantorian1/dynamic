/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_collect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:43:05 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 15:11:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_collect.h"

#include "safe_alloc.h"
#include "dyn_memcpy.h"
#include "dyn_memdup.h"

void *_Nonnull *_Nullable	vptr_collect(t_vptr *_Nonnull vptr)
{
	void	**collect;
	size_t	index;
	size_t	bytes;

	if (vptr == NULL)
		return (NULL);

	collect = safe_alloc(sizeof(*collect) * (vptr->len + 1));
	collect[vptr->len] = NULL;

	index = 0;
	while (index < vptr->len)
	{
		bytes = (vptr->_pad_front + index) * vptr->_elem_size;
		collect[index] = dyn_memdup(vptr->_start + bytes, vptr->_elem_size);
		index++;
	}

	return (collect);
}

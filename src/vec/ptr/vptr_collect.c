/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_collect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:43:05 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 16:56:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_collect.h"

#include "safe_alloc.h"
#include "dyn_memcpy.h"
#include "dyn_memdup.h"
#include "dyn_memset.h"

void *_Nullable	vptr_collect_impl(t_vptr *_Nonnull vptr)
{
	// void	**collect;
	// size_t	index;
	// size_t	bytes;
	//
	// if (vptr == NULL)
	// 	return (NULL);
	//
	// collect = safe_alloc(sizeof(*collect) * (vptr->len + 1));
	// collect[vptr->len] = NULL;
	//
	// index = 0;
	// while (index < vptr->len)
	// {
	// 	bytes = index * vptr->_elem_size;
	// 	collect[index] = dyn_memdup((char *)vptr->_start + bytes, vptr->_elem_size);
	// 	index++;
	// }
	//
	// return (collect);
	
	void	*collect;
	size_t	bytes;
	
	if (vptr == NULL)
		return (NULL);

	bytes = vptr->len * vptr->_elem_size;
	collect = safe_alloc(bytes + vptr->_elem_size);
	dyn_memcpy(collect, vptr->_start, bytes);
	dyn_memset((char *)collect + bytes, 0, vptr->_elem_size);

	return (collect);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_collect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:43:05 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 09:15:12 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_collect.h"

#include "safe_alloc.h"
#include "dyn_memcpy.h"
#include "dyn_memdup.h"
#include "dyn_memset.h"

void *_Nullable	vptr_collect_impl(t_vptr *_Nonnull vptr)
{
	void	*collect;
	size_t	bytes;

	if (vptr == NULL)
		return (NULL);
	bytes = vptr->len * vptr->_elem_size;
	collect = safe_alloc(bytes + vptr->_elem_size);
	dyn_memcpy(collect, vptr->data, bytes);
	dyn_memset((char *)collect + bytes, 0, vptr->_elem_size);
	return (collect);
}

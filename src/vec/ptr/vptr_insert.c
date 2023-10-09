/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:04:01 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 14:13:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_insert.h"

#include "vptr_should_grow_back.h"
#include "vptr_grow_back.h"
#include "vptr_should_grow_garbage.h"
#include "vptr_grow_garbage.h"
#include "dyn_memove.h"
#include "dyn_memcpy.h"

t_vptr *_Nullable	vptr_insert(
	t_vptr *_Nonnull vptr,
	void *_Nonnull data,
	size_t index
) {
	char	*src;

	if (vptr == NULL | index > vptr->len)
		return (NULL);

	if (vptr_should_grow_back(vptr, vptr->len + 1))
		vptr_grow_back(vptr, vptr->_len + 1);

	if (vptr_should_grow_garbage(vptr, vptr->len + 1))
		vptr_grow_garbage(vptr, vptr->_len_garbage + 1);

	src = (char *)vptr->_start + (vptr->_pad_front + index) * vptr->_elem_size;
	dyn_memove(src + 1, src, vptr->_len - index);
	dyn_memcpy(src, data, vptr->_elem_size);

	vptr->_garbage[vptr->len] = data;
	vptr->len++;
	vptr->_pad_back--;

	return (vptr);
}

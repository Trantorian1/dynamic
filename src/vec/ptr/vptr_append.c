/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_append.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:02:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:33:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_append.h"

#include "vptr_should_grow_back.h"
#include "vptr_grow_back.h"
#include "vptr_should_grow_garbage.h"
#include "vptr_grow_garbage.h"
#include "dyn_memcpy.h"
#include "vptr_get.h"

t_vptr *_Nullable	vptr_append(
	t_vptr *_Nonnull vptr,
	void *_Nonnull val
) {
	size_t	bytes;

	if (vptr == NULL || val == NULL)
		return (NULL);

	if (vptr_should_grow_back(vptr, vptr->len + 1))
		vptr_grow_back(vptr, vptr->_len + 1);

	if (vptr_should_grow_garbage(vptr, vptr->len + 1))
		vptr_grow_garbage(vptr, vptr->_len_garbage + 1);

	bytes = (vptr->_pad_front + vptr->len) * vptr->_elem_size;
	dyn_memcpy((char *)vptr->_start + bytes, val, vptr->_elem_size);

	vptr->_garbage[vptr->len] = val;
	vptr->len++;
	vptr->_pad_back--;

	return (vptr);
}

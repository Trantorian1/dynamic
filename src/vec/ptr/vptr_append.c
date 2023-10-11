/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_append.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:02:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/11 14:57:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_append.h"

#include "vptr_should_grow_back.h"
#include "vptr_grow_back.h"
#include "dyn_memcpy.h"
#include "vptr_get.h"

t_vptr *_Nullable	vptr_append(
	t_vptr *_Nonnull vptr,
	void *_Nullable val
) {
	size_t	bytes;

	if (vptr == NULL || val == NULL)
		return (vptr);

	if (vptr_should_grow_back(vptr, vptr->len + 1))
		vptr_grow_back(vptr, vptr->len + 1);

	bytes = vptr->len * vptr->_elem_size;
	dyn_memcpy((char *)vptr->data + bytes, (void *)val, vptr->_elem_size);

	vptr->len++;

	return (vptr);
}

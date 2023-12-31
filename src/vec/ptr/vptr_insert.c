/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:04:01 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 09:18:38 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_insert.h"

#include "vptr_should_grow_back.h"
#include "vptr_grow_back.h"
#include "dyn_memove.h"
#include "dyn_memcpy.h"

t_vptr *_Nullable	vptr_insert(
	t_vptr *_Nonnull vptr,
	void *_Nonnull data,
	size_t index
) {
	char	*src;
	size_t	len;

	if (vptr == NULL || data == NULL || index > vptr->len)
		return (NULL);
	if (vptr_should_grow_back(vptr, vptr->len + 1))
		vptr_grow_back(vptr, vptr->_len + 1);
	src = (char *)vptr->data + index * vptr->_elem_size;
	len = (vptr->len - index) * vptr->_elem_size;
	dyn_memove(src + vptr->_elem_size, src, len);
	dyn_memcpy(src, data, vptr->_elem_size);
	vptr->len++;
	return (vptr);
}

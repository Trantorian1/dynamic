/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_join.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:42:57 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 09:19:43 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_join.h"

#include "vptr_should_grow_back.h"
#include "vptr_grow_back.h"
#include "dyn_memcpy.h"

t_vptr *_Nullable	vptr_join(t_vptr *_Nonnull vptr_a, t_vptr *_Nonnull vptr_b)
{
	size_t	bytes;
	size_t	to_copy;

	if (vptr_a == NULL || vptr_b == NULL || \
		vptr_a->_elem_size != vptr_b->_elem_size)
	{
		return (NULL);
	}
	if (vptr_should_grow_back(vptr_a, vptr_a->len + vptr_b->len))
		vptr_grow_back(vptr_a, vptr_a->len + vptr_b->len);
	bytes = vptr_a->len * vptr_a->_elem_size;
	to_copy = vptr_b->len * vptr_b->_elem_size;
	dyn_memcpy((char *)vptr_a->data + bytes, vptr_b->data, to_copy);
	vptr_a->len += vptr_b->len;
	return (vptr_a);
}

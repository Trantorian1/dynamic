/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ptr_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:02:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 14:31:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_ptr_append.h"

#include "vec_ptr_should_grow_back.h"
#include "vec_ptr_grow_back.h"
#include "dyn_memcpy.h"
#include "vec_ptr_get.h"

t_vptr *_Nullable	vec_ptr_append(
	t_vptr *_Nonnull vptr,
	void *_Nonnull val
) {
	if (vptr == NULL || val == NULL)
		return (NULL);

	if (vec_ptr_should_grow_back(vptr, vptr->len + 1))
		vec_ptr_grow_back(vptr, vptr->_len + 1);

	dyn_memcpy(
		(char *)vptr->_data + vptr->len * vptr->_elem_size,
		val,
		vptr->_elem_size
	);

	vptr->len++;
	vptr->_pad_back--;

	return (vptr);
}

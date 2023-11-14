/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:28:38 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 09:18:28 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_create.h"

#include "closest_pow_2.h"
#include "safe_alloc.h"

t_vptr *_Nonnull	vptr_create_impl(size_t elem_size, size_t len)
{
	size_t	_len;
	t_vptr	*vptr;

	_len = closest_pow_2(len);
	if (_len < VEC_PTR_LEN_MIN)
		_len = VEC_PTR_LEN_MIN;
	vptr = safe_alloc(sizeof(*vptr));
	vptr->data = safe_alloc(elem_size * _len);
	vptr->_len = _len;
	vptr->_elem_size = elem_size;
	vptr->len = 0;
	return (vptr);
}

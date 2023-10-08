/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ptr_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:28:38 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 14:27:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_ptr_create.h"

#include "closest_pow_2.h"
#include "safe_alloc.h"

t_vptr *_Nonnull	vec_ptr_create_impl(size_t elem_size, size_t len)
{
	size_t	_len;
	t_vptr	*vect_ptr;

	_len = closest_pow_2(len);
	if (_len < VECT_PTR_LEN_MIN)
		_len = VECT_PTR_LEN_MIN;

	vect_ptr = safe_alloc(sizeof(*vect_ptr));
	vect_ptr->_start = safe_alloc(elem_size * _len);
	vect_ptr->_len = _len;
	vect_ptr->_pad_front = (_len - len) / 2;
	vect_ptr->_pad_back = (_len - len) - vect_ptr->_pad_front;
	vect_ptr->_elem_size = elem_size;
	vect_ptr->_data = (char *)vect_ptr->_start + vect_ptr->_pad_front * elem_size;

	return (vect_ptr);
}

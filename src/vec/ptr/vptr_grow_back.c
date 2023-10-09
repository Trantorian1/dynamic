/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_grow_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:04:15 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:36:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_grow_back.h"

#include "closest_pow_2.h"
#include "safe_realloc.h"

void	vptr_grow_back(t_vptr *_Nonnull vptr, size_t target)
{
	size_t	_len;

	if (vptr == NULL || target <= vptr->_len)
		return ;

	_len = closest_pow_2(target);
	vptr->_start = safe_realloc(vptr->_start, _len * vptr->_elem_size);
	vptr->_len = _len;
	vptr->_pad_back = _len - vptr->len - vptr->_pad_front;
}

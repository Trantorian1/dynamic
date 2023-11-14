/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_grow_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:04:15 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 09:15:58 by jcaron           ###   ########.fr       */
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
	vptr->data = safe_realloc(vptr->data, _len * vptr->_elem_size);
	vptr->_len = _len;
}

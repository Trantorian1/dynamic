/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_get.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:52:56 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:47:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_get.h"

void *_Nullable	vptr_get(t_vptr *_Nonnull vptr, size_t index)
{
	size_t	bytes;

	if (vptr == NULL || index > vptr->len)
		return (NULL);

	bytes = (vptr->_pad_front + index) * vptr->_elem_size;
	return ((char *)vptr->_start + bytes);
}

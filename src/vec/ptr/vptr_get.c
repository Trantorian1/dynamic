/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_get.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:43:04 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 14:47:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_get.h"

void *_Nullable	vptr_get(t_vptr *_Nonnull vptr, size_t index)
{
	size_t	bytes;

	if (vptr == NULL || index >= vptr->len)
		return (NULL);
	bytes = index * vptr->_elem_size;
	return ((char *)vptr->data + bytes);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_last.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:53:12 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 14:39:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_last.h"

void *_Nullable	vptr_last(t_vptr *_Nonnull vptr)
{
	size_t	bytes;

	if (vptr == NULL || vptr->len == 0)
		return (NULL);
	bytes = vptr->len * vptr->_elem_size;
	return ((char *)vptr->data + bytes);
}

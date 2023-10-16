/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_rm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:46:49 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 17:07:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_rm.h"

#include "dyn_memove.h"

t_vptr *_Nullable	vptr_rm(t_vptr *_Nonnull vptr, size_t index)
{
	char	*target;
	size_t	bytes;

	if (vptr == NULL || index >= vptr->len)
		return (NULL);

	target = (char *)vptr->data + index * vptr->_elem_size;
	bytes = (vptr->len - index) * vptr->_elem_size;
	dyn_memove(target, target + vptr->_elem_size, bytes);

	vptr->len--;
	return (vptr);
}

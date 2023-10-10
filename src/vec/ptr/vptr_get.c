/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_get.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:52:56 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 12:28:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_get.h"

void *_Nullable	vptr_get(t_vptr *_Nonnull vptr, size_t index)
{
	if (vptr == NULL || index > vptr->len)
		return (NULL);

	return ((char *)vptr->_start + index * vptr->_elem_size);
}

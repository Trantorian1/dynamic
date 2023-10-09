/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_collec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:43:05 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 14:47:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_collect.h"

#include "safe_alloc.h"
#include "dyn_memcpy.h"

void *_Nullable	vptr_collect(t_vptr *_Nonnull vptr)
{
	size_t	len;
	void	*collect;
	char	*src;

	if (vptr == NULL)
		return (NULL);

	len = vptr->len * vptr->_elem_size;
	collect = safe_alloc(len);
	src = (char *)vptr->_start + vptr->_pad_front * vptr->_elem_size;

	return (dyn_memcpy(collect, src, len));
}

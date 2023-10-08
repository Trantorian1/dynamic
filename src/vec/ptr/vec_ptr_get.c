/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ptr_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:52:56 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 14:27:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_ptr_get.h"

void *_Nullable	vec_ptr_get(t_vptr *_Nonnull vptr, size_t index)
{
	if (vptr == NULL || index > vptr->len)
		return (NULL);

	return ((char *)vptr->_data + index * vptr->_elem_size);
}

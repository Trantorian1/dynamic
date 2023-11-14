/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_first.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:49:23 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 14:51:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_first.h"

void *_Nullable	vptr_first(t_vptr *_Nonnull vptr)
{
	if (vptr == NULL || vptr->len == 0)
		return (NULL);
	return ((char *)vptr->data);
}

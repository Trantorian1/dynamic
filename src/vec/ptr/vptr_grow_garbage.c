/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_grow_garbage.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:58:22 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:11:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_grow_garbage.h"

#include "closest_pow_2.h"
#include "safe_realloc.h"

void	vptr_grow_garbage(t_vptr *_Nonnull vptr, size_t target)
{
	if (vptr == NULL || target < vptr->_len_garbage)
		return ;

	vptr->_len_garbage = closest_pow_2(target);
	vptr->_garbage = safe_realloc(
		vptr->_garbage,
		sizeof(*vptr->_garbage) * vptr->_len_garbage
	);
}

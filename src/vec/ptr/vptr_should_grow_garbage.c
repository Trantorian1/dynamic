/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_should_grow_garbage.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:56:16 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 08:56:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_should_grow_garbage.h"

bool	vptr_should_grow_garbage(t_vptr *_Nonnull vptr, size_t target)
{
	return (target > vptr->_len_garbage);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_should_grow_back.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:59:37 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 12:30:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_should_grow_back.h"

bool	vptr_should_grow_back(t_vptr *vptr, size_t target)
{
	return (target > vptr->_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_ptr_should_grow_back.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:59:37 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 14:12:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_ptr_should_grow_back.h"

bool	vec_ptr_should_grow_back(t_vptr *vptr, size_t target)
{
	return (target > vptr->len + vptr->_pad_back);
}

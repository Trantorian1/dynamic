/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_destroy_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:49:27 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:35:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_destroy_data.h"

#include <stddef.h>

#include "vptr_destroy.h"

void	vptr_destroy_data(
	t_vptr *_Nonnull vptr,
	void (*f)(void *_Nullable)
) {
	size_t	index;

	if (vptr == NULL || f == NULL)
		return ;

	index = 0;
	while (index < vptr->len)
	{
		f(vptr->_garbage[index]);
		index++;
	}

	vptr_destroy(vptr);
}

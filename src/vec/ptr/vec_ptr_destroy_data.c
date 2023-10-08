/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ptr_destroy_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:49:27 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 16:51:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_ptr_destroy_data.h"

#include <stddef.h>

#include "vec_ptr_destroy.h"
#include "vec_ptr_get.h"

void	vec_ptr_destroy_data(
	t_vptr *_Nonnull vptr,
	void (*f)(void *_Nullable)
) {
	size_t	index;

	if (vptr == NULL || f == NULL)
		return ;

	index = 0;
	while (index < vptr->len)
	{
		f(vec_ptr_get(vptr, index));
		index++;
	}

	vec_ptr_destroy(vptr);
}

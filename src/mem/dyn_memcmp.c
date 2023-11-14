/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:59:29 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 18:09:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_memcmp.h"

#include <stdlib.h>
#include <string.h>

int32_t	dyn_memcmp(void *_Nonnull ptr_a, void *_Nonnull ptr_b, size_t bytes)
{
	size_t	index;
	int32_t	diff;

	if (ptr_a == NULL || ptr_b == NULL)
		return (ptr_a == ptr_b);
	index = 0;
	diff = 0;
	while (index < bytes)
	{
		diff = ((char *)ptr_a)[index] - ((char *)ptr_b)[index];
		if (diff != 0)
			return (diff);
		index++;
	}
	return (diff);
}

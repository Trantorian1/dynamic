/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:59:29 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 17:19:38 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_memcmp.h"

#include <stdlib.h>
#include <string.h>

int32_t	dyn_memcmp(void *_Nonnull ptr_a, void *_Nonnull ptr_b, size_t bytes)
{
	size_t	i;

	if (ptr_a == NULL || ptr_b == NULL)
		return (0);
	i = 0;
	while (bytes--)
	{
		if (((const int8_t *)ptr_a)[i] != ((const int8_t *)ptr_b)[i])
			return (((const int8_t *)ptr_a)[i] - ((const int8_t *)ptr_b)[i]);
		i++;
	}
	return (0);
}

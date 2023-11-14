/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:02:17 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 17:25:53 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_memcpy.h"

#include <string.h>
#include <stdint.h>

void *_Nullable	dyn_memcpy(void *_Nonnull dst, void *_Nonnull src, size_t n)
{
	size_t	i;

	if (dst == NULL || src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		((int8_t *)dst)[i] = ((const int8_t *)src)[i];
		i++;
	}
	return (dst);
}

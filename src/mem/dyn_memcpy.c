/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:02:17 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 18:13:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_memcpy.h"

#include <string.h>

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
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

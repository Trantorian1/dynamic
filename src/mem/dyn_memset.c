/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:53:34 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 18:15:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_memset.h"

#include <string.h>
#include <stdint.h>

void *_Nullable	dyn_memset(void *_Nonnull ptr, uint8_t bit, size_t n)
{
	size_t	i;

	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((uint8_t *)ptr)[i] = bit;
		i++;
	}
	return (ptr);
}

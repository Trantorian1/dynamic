/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:53:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 16:55:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_memset.h"

#include <string.h>

void *_Nullable	dyn_memset(void *_Nonnull ptr, uint8_t bit, size_t n)
{
	if (ptr == NULL)
		return (NULL);

	return (memset(ptr, bit, n));
}

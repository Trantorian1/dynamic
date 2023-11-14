/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:04:39 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 17:28:16 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_memove.h"
#include "dyn_memcpy.h"

#include <string.h>
#include <stdint.h>

void *_Nullable	dyn_memove(void *_Nonnull dst, void *_Nonnull src, size_t n)
{
	if (dst == NULL || src == NULL)
		return (NULL);
	if (((int8_t *)src) < ((int8_t *)dst))
		while (n--)
			((int8_t *)dst)[n] = ((int8_t *)src)[n];
	else
		dyn_memcpy(dst, src, n);
	return (dst);
}

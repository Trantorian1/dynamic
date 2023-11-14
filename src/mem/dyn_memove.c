/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:04:39 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 18:14:50 by marvin           ###   ########.fr       */
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
	if (((char *)src) < ((char *)dst))
		while (n--)
			((char *)dst)[n] = ((char *)src)[n];
	else
		dyn_memcpy(dst, src, n);
	return (dst);
}

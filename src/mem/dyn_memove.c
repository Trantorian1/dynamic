/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:04:39 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 12:05:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_memove.h"

#include <string.h>

void *_Nullable	dyn_memove(void *_Nonnull dst, void *_Nonnull src, size_t n)
{
	if (dst == NULL || src == NULL)
		return (NULL);

	return (memmove(dst, src, n));
}

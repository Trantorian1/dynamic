/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:02:17 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 09:00:44 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_memcpy.h"

#include <string.h>

void *_Nullable	dyn_memcpy(void *_Nonnull dst, void *_Nonnull src, size_t n)
{
	if (dst == NULL || src == NULL)
		return (NULL);
	return (memcpy(dst, src, n));
}

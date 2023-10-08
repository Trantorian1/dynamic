/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:59:29 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 12:02:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_memcmp.h"

#include <stdlib.h>
#include <string.h>

int32_t	dyn_memcmp(void *_Nonnull ptr_a, void *_Nonnull ptr_b, size_t bytes)
{
	if (ptr_a == NULL || ptr_b == NULL)
		return (0);
	return (memcmp(ptr_a, ptr_b, bytes));
}

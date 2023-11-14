/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:03:00 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 18:14:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_memdup.h"

#include "safe_alloc.h"
#include "dyn_memcpy.h"

void *_Nullable	dyn_memdup(void *_Nonnull src, size_t bytes)
{
	void	*dup;

	if (src == NULL)
		return (NULL);
	dup = safe_alloc(bytes);
	return (dyn_memcpy(dup, src, bytes));
}

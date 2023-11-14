/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_realloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:18:21 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 08:57:52 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "safe_realloc.h"

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

#include "safe_alloc.h"
#include "safe_free.h"

void *_Nonnull	safe_realloc(void *_Nonnull ptr, size_t bytes)
{
	t_cell	*cell;
	t_cell	*cell_new;

	if (ptr == NULL)
		return (safe_alloc(bytes));
	cell = ((t_cell *)ptr) - 1;
	if (bytes < cell->bytes)
		return (ptr);
	cell_new = ((t_cell *)safe_alloc(bytes)) - 1;
	memcpy(cell_new + 1, cell + 1, cell->bytes);
	safe_free(ptr);
	return (cell_new + 1);
}

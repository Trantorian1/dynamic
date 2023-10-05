/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_alloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:56:22 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 11:09:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "safe_alloc.h"

#include <stddef.h>
#include <stdlib.h>

#include "s_cell.h"

static t_cell	*g_tail = NULL;

void *_Nonnull	safe_alloc(size_t bytes)
{
	t_cell	*cell;

	cell = malloc(sizeof(*cell) + bytes);
	if (cell == NULL)
		exit(EXIT_FAILURE);

	cell->bytes = bytes;
	if (g_tail == NULL)
		g_tail = cell;
	else
	{
		g_tail->next = cell;
		cell->prev = g_tail;
		g_tail = cell;
	}

	return (cell + 1);
}

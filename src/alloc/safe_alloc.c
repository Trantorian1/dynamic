/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_alloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:56:22 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 08:57:25 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "safe_alloc.h"

#include <stddef.h>
#include <stdlib.h>

#include "s_cell.h"

t_cell	*g_tail = NULL;

void *_Nonnull	safe_alloc(size_t bytes)
{
	t_cell	*cell;

	cell = malloc(sizeof(*cell) + bytes);
	if (cell == NULL)
		exit(EXIT_FAILURE);
	cell->bytes = bytes;
	cell->prev = g_tail;
	cell->next = NULL;
	if (g_tail == NULL)
		g_tail = cell;
	else
		g_tail->next = cell;
	g_tail = cell;
	return (cell + 1);
}

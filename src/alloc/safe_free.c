/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:06:39 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 08:57:41 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "safe_free.h"

#include <stdlib.h>

void	safe_free(void *_Nullable ptr)
{
	t_cell	*cell;

	if (ptr == NULL)
		return ;
	cell = ((t_cell *)ptr) - 1;
	if (cell->prev != NULL)
		cell->prev->next = cell->next;
	if (cell->next != NULL)
		cell->next->prev = cell->prev;
	else
		g_tail = cell->prev;
	free(cell);
}

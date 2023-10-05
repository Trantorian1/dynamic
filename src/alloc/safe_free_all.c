/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_free_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:51 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 11:16:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "safe_free_all.h"

void	safe_free_all(void)
{
	t_cell	*cell_curr;
	t_cell	*cell_prev;

	cell_curr = g_tail;
	while (cell_curr != NULL)
	{
		cell_prev = cell_curr;
		cell_curr = cell_curr->prev;
		free(cell_prev);
	}
}

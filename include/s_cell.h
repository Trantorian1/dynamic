/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_cell.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:58:32 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 11:03:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_CELL_H
# define S_CELL_H

# include <stddef.h>

typedef struct s_cell
{
	struct s_cell *_Nullable	prev;
	struct s_cell *_Nullable	next;
	size_t						bytes;
}	t_cell;

#endif

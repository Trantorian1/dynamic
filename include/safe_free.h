/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_free.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:07:00 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 13:45:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAFE_FREE_H
# define SAFE_FREE_H

# include "s_cell.h"

extern t_cell	*g_tail;

void	safe_free(void *_Nullable ptr);

#endif

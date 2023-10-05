/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_free_all.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:13:23 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 11:14:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAFE_FREE_ALL_H
# define SAFE_FREE_ALL_H

# include "s_cell.h"

extern t_cell	*g_tail;

void	safe_free_all(void);

#endif

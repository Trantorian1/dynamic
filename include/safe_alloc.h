/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_alloc.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:05:36 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 14:42:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAFE_ALLOC_H
# define SAFE_ALLOC_H

# include <stddef.h>
# include "s_cell.h"

extern t_cell	*g_tail;

void *_Nonnull	safe_alloc(size_t bytes);

#endif

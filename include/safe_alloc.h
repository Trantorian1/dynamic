/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_alloc.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:05:36 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 15:23:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAFE_ALLOC_H
# define SAFE_ALLOC_H

# include <stddef.h>
# include "s_cell.h"

extern t_cell *_Nullable	g_tail;

void *_Nonnull	safe_alloc(size_t bytes);

#endif

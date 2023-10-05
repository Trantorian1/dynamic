/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_realloc.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:17:06 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 11:25:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAFE_REALLOC_H
# define SAFE_REALLOC_H

# include "s_cell.h"

extern t_cell	*g_tail;

void *_Nonnull	safe_realloc(void *_Nonnull ptr, size_t size);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_grow_back.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:03:00 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:28:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_GROW_BACK_H
# define VPTR_GROW_BACK_H

# include <stddef.h>
# include "s_vptr.h"

void	vptr_grow_back(t_vptr *_Nonnull vptr, size_t target);

#endif

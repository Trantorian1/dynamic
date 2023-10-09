/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_grow_garbage.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:57:14 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:29:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_GROW_GARBAGE_H
# define VPTR_GROW_GARBAGE_H

# include <stddef.h>
# include "s_vptr.h"

void	vptr_grow_garbage(t_vptr *_Nonnull vptr, size_t target);

#endif

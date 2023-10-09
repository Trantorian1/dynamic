/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_should_grow_garbage.h                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:54:07 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:29:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_SHOLD_APPEND_GARBAGE_H
# define VPTR_SHOLD_APPEND_GARBAGE_H

# include <stdbool.h>
# include <stddef.h>
# include "s_vptr.h"

bool	vptr_should_grow_garbage(t_vptr *_Nonnull vptr, size_t target);

#endif

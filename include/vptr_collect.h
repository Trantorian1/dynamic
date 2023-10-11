/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_collect.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:42:11 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 16:57:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_COLLECT_H
# define VPTR_COLLECT_H

# include "s_vptr.h"

# define vptr_collect(type, vptr) ((type *) vptr_collect_impl(vptr))

void *_Nullable	vptr_collect_impl(t_vptr *_Nonnull vptr);

#endif

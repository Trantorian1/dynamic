/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_rm.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:45:55 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 17:06:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_RM_H
# define VPTR_RM_H

# include <stddef.h>
# include "s_vptr.h"

t_vptr *_Nullable	vptr_rm(t_vptr *_Nonnull vptr, size_t index);

#endif

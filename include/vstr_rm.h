/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr_rm.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:01:01 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 23:02:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VSTR_RM_H
# define VSTR_RM_H

# include <stddef.h>
# include "s_vptr.h"

t_vptr *_Nullable	vstr_rm(t_vptr *_Nonnull vstr, size_t index);

#endif

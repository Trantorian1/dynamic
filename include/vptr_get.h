/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_get.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:51:51 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:27:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_GET_H
# define VPTR_GET_H

# include <stddef.h>
# include "s_vptr.h"

void *_Nullable	vptr_get(t_vptr *_Nonnull vptr, size_t index);

#endif

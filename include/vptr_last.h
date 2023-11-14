/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_last.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:08:26 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 14:35:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_LAST_H
# define VPTR_LAST_H

# include <stddef.h>
# include <stdint.h>
# include "s_vptr.h"

void *_Nullable	vptr_last(t_vptr *_Nonnull vptr);

#endif

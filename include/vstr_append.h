/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr_append.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:06:17 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 14:08:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VSTR_APPEND_H
# define VSTR_APPEND_H

# include "s_vptr.h"
# include "s_str.h"

t_vptr *_Nullable	vstr_append(t_vptr *_Nonnull vstr, t_str str);

#endif

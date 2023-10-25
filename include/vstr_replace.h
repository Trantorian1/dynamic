/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr_replace.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 04:17:32 by marvin            #+#    #+#             */
/*   Updated: 2023/10/25 04:26:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VSTR_REPLACE_H
# define VSTR_REPLACE_H

# include <stddef.h>
# include "s_vptr.h"
# include "s_str.h"

t_vptr *_Nullable	vstr_replace(t_vptr *_Nonnull vstr, t_str str, size_t index);

#endif

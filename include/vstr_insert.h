/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr_insert.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:25:27 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 14:28:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VSTR_INSERT_H
# define VSTR_INSERT_H

# include <stddef.h>
# include "s_vptr.h"
# include "s_str.h"

t_vptr *_Nullable	vstr_insert(t_vptr *_Nonnull vstr, t_str str, size_t index);

#endif

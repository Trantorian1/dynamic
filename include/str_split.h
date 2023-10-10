/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:50:58 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 12:44:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_SPLIT_H
# define STR_SPLIT_H

# include "s_str.h"
# include "s_vptr.h"

t_vptr *_Nullable	str_split(t_str str, t_cstr _Nonnull pattern);

#endif

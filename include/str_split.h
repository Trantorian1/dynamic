/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_split.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:50:58 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:52:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_SPLIT_H
# define STR_SPLIT_H

# include "s_str.h"
# include "s_vptr.h"

t_vptr *_Nullable	str_split(t_str *_Nonnull str, t_cstr _Nonnull pattern);

#endif

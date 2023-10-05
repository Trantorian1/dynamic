/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_prepend_str.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:09:19 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 13:10:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_PREPEND_STR_H
# define STR_PREPEND_STR_H

# include "s_str.h"

t_str *_Nullable	str_prepend_str(t_str *_Nonnull str, t_cstr _Nonnull cstr);

#endif

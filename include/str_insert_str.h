/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_insert_str.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:19:54 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 13:21:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_INSERT_STR_H
# define STR_INSERT_STR_H

# include "s_str.h"

t_str *_Nullable	str_insert_str(
	t_str *_Nonnull str,
	t_cstr _Nonnull cstr,
	size_t index
);

#endif

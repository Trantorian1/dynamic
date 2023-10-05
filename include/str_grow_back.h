/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_grow_back.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:17:29 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 12:24:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_GROW_H
# define STR_GROW_H

# include "s_str.h"
# include <stddef.h>

void	str_grow_back(t_str *_Nonnull str, size_t target);

#endif

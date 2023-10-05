/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_grow_front.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:27:14 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 12:28:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_GROW_FRONT_H
# define STR_GROW_FRONT_H

# include <stddef.h>
# include "s_str.h"

void	str_grow_front(t_str *_Nonnull str, size_t target);

#endif

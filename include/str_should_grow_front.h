/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_should_grow_front.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:54:39 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 12:57:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_SHOULD_GROW_FRONT_H
# define STR_SHOULD_GROW_FRONT_H

# include <stddef.h>
# include <stdbool.h>
# include "s_str.h"

bool	str_should_grow_front(t_str *_Nonnull str, size_t target);

#endif

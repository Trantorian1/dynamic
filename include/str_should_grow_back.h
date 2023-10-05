/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_should_grow_back.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:48:36 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 12:50:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_SHOULD_GROW_BACK_H
# define STR_SHOULD_GROW_BACK_H

# include <stdbool.h>
# include <stddef.h>
# include "s_str.h"

bool	str_should_grow_back(t_str *_Nonnull str, size_t target);

#endif

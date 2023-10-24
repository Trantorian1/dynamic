/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_contains.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:32:24 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 13:35:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_CONTAINS_H
# define STR_CONTAINS_H

# include <stdint.h>
# include <stdbool.h>
# include "s_str.h"

bool	str_contains(t_str str, t_cstr _Nonnull target);

#endif

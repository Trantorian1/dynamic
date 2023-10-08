/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:01:03 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 16:02:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_ALLOC_H
# define STR_ALLOC_H

# include <stddef.h>
# include "s_str.h"

t_str *_Nonnull	str_alloc(size_t len);

#endif

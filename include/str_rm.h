/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_rm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:02:28 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 16:09:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_RM_H
# define STR_RM_H

# include <stddef.h>
# include "s_str.h"

void	str_rm(t_str *_Nonnull str, size_t start, size_t stop);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_substr.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:09:51 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 16:10:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_SUBSTR_H
# define STR_SUBSTR_H

# include <stddef.h>
# include "s_str.h"

t_str *_Nullable	str_substr(t_str *_Nonnull str, size_t start, size_t stop);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_to_i64.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:12:52 by marvin            #+#    #+#             */
/*   Updated: 2023/11/13 20:14:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CSTR_TO_I64_H
# define CSTR_TO_I64_H

# include <stdint.h>
# include "s_str.h"

uint8_t	cstr_to_i64(t_cstr _Nonnull str, int64_t *_Nonnull res);

#endif

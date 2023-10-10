/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_append_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:05:57 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 12:47:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_append_str.h"

#include <stddef.h>

#include "cstr_len.h"
#include "str_should_grow_back.h"
#include "str_grow_back.h"
#include "dyn_memcpy.h"

void	str_append_str(t_str *_Nonnull str, t_cstr _Nonnull cstr)
{
	size_t	len;

	if (str == NULL || cstr == NULL)
		return ;

	len = cstr_len(cstr);
	if (str_should_grow_back(str, str->len + len))
		str_grow_back(str, str->len + len);

	dyn_memcpy(str->_start + str->len, cstr, len + 1);
	str->len += len;
}

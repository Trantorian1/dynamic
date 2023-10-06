/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:50:51 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 09:34:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_create.h"

#include <stdlib.h>

#include "safe_alloc.h"
#include "cstr_len.h"
#include "cstr_alloc.h"
#include "closest_pow_2.h"
#include "dyn_memcpy.h"

t_str *_Nullable	str_create(t_cstr _Nonnull cstr)
{
	t_str	*str;
	size_t	len;
	size_t	_len;
	size_t	pad_front;

	if (cstr == NULL)
		return (NULL);

	str = safe_alloc(sizeof(*str));
	len = cstr_len(cstr);
	_len = closest_pow_2(len);

	if (len < STR_LEN_MIN)
		_len  = STR_LEN_MIN;

	pad_front = (_len - len) / 2;

	str->_start = cstr_alloc(_len);
	str->_len = _len;
	str->_pad_front = pad_front;
	str->_pad_back = _len - len - pad_front;
	str->get = str->_start + pad_front;
	str->len = len;

	dyn_memcpy(str->get, cstr, len + 1);

	return (str);
}

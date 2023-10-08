/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:00:53 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 16:22:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_alloc.h"

#include "safe_alloc.h"
#include "cstr_alloc.h"
#include "closest_pow_2.h"

t_str *_Nonnull	str_alloc(size_t len)
{
	t_str	*str;
	size_t	_len;
	size_t	pad_front;

	str = safe_alloc(sizeof(*str));
	_len = closest_pow_2(len);

	if (_len < STR_LEN_MIN)
		_len = STR_LEN_MIN;

	pad_front = (_len - len) / 2;

	str->_start = cstr_alloc(_len);
	str->_len = _len;
	str->_pad_front = pad_front;
	str->_pad_back = _len - len - pad_front;
	str->get = str->_start + pad_front;
	str->len = 0;

	return (str);
}

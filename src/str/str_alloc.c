/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:00:53 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 13:16:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_alloc.h"

#include "safe_alloc.h"
#include "cstr_alloc.h"
#include "closest_pow_2.h"

t_str	str_alloc(size_t len)
{
	t_str	str;
	size_t	_len;

	_len = closest_pow_2(len);

	if (_len < STR_LEN_MIN)
		_len = STR_LEN_MIN;

	str._start = cstr_alloc(_len);
	str._len = _len;
	str.len = 0;

	return (str);
}

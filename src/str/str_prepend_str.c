/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_prepend_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:10:23 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 11:01:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_prepend_str.h"

#include "cstr_len.h"
#include "str_should_grow_front.h"
#include "str_grow_front.h"
#include "dyn_memcpy.h"

t_str *_Nullable	str_prepend_str(t_str *_Nonnull str, t_cstr _Nonnull cstr)
{
	size_t	len;

	if (str == NULL || cstr == NULL)
		return (NULL);

	len = cstr_len(cstr);
	if (str_should_grow_front(str, str->len + len))
		str_grow_front(str, str->_len + len);

	dyn_memcpy(str->get - len, cstr, len);
	str->len += len;
	str->get -= len;
	str->_pad_front -= len;

	return (str);
}

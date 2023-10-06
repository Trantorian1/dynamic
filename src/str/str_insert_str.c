/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_insert_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:21:09 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 12:27:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_insert_str.h"

#include "cstr_len.h"
#include "str_should_grow_back.h"
#include "str_grow_back.h"
#include "dyn_memove.h"
#include "dyn_memcpy.h"

// TODO: split growth between front and back for insertion (this is easier for
// now)
t_str *_Nullable	str_insert_str(
	t_str *_Nonnull str,
	t_cstr _Nonnull cstr,
	size_t index
) {
	size_t	len;

	if (str == NULL || cstr == NULL || index > str->len)
		return (NULL);

	len = cstr_len(cstr);
	if (str_should_grow_back(str, str->len + len))
		str_grow_back(str, str->_len + len);

	dyn_memove(str->get + index + len, str->get + index, str->len - index + 1);
	dyn_memcpy(str->get + index, cstr, len);
	str->len += len;
	str->_pad_back -= len;

	return (str);
}

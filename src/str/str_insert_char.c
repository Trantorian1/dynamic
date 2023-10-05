/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_insert_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:14:50 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 13:23:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_insert_char.h"

#include "str_should_grow_back.h"
#include "str_grow_back.h"
#include "dyn_memove.h"

// TODO: split growth between front and back for insertion (this is easier for
// now)
t_str *_Nullable	str_insert_char(t_str *_Nonnull str, char c, size_t index)
{
	if (str == NULL | index > str->len)
		return (NULL);

	if (str_should_grow_back(str, str->len + 1))
		str_grow_back(str, str->len + 1);

	dyn_memove(str->get + index + 1, str->get + index, str->len - index + 1);
	str->get[index] = c;
	str->len++;
	str->_pad_back--;

	return (str);
}

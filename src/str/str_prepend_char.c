/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_prepend_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:02:18 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 13:04:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_prepend_char.h"

#include "str_should_grow_front.h"
#include "str_grow_front.h"

t_str *_Nullable	str_prepend_char(t_str *_Nonnull str, char c)
{
	if (str == NULL)
		return (NULL);

	if (str_should_grow_front(str, str->len + 1))
		str_grow_front(str, str->len + 1);

	str->get[-1] = c;
	str->get--;
	str->len++;
	str->_pad_front--;

	return (str);
}

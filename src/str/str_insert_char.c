/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_insert_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:14:50 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 13:20:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_insert_char.h"

#include "str_should_grow_back.h"
#include "str_grow_back.h"
#include "dyn_memove.h"

void	str_insert_char(t_str *_Nonnull str, char c, size_t index)
{
	if (str == NULL || index > str->len)
		return ;

	if (str_should_grow_back(str, str->len + 1))
		str_grow_back(str, str->_len + 1);

	dyn_memove(str->get + index + 1, str->get + index, str->len - index + 1);
	str->get[index] = c;
	str->len++;
}

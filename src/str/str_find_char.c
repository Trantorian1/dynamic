/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_find_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:39:35 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 09:32:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_find_char.h"

size_t	str_find_char(t_str *_Nonnull str, char c)
{
	size_t	index;

	if (str == NULL)
		return (0);

	index = 0;
	while (str->_start[index] != '\0' && str->_start[index] != c)
		index++;

	return (index);
}

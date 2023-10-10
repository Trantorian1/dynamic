/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_find_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:39:35 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 12:50:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_find_char.h"

size_t	str_find_char(t_str str, char c)
{
	size_t	index;

	index = 0;
	while (str._start[index] != '\0' && str._start[index] != c)
		index++;

	return (index);
}

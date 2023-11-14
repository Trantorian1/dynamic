/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_find_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:39:35 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 09:05:51 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_find_char.h"

size_t	str_find_char(t_str str, char c)
{
	size_t	index;

	index = 0;
	while (str.get[index] != '\0' && str.get[index] != c)
		index++;
	return (index);
}

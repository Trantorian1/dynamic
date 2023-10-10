/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:11:01 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 13:20:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_substr.h"

#include "str_create.h"
#include "str_alloc.h"
#include "dyn_memcpy.h"

t_str	str_substr(t_str str, size_t start, size_t stop)
{
	size_t	len;
	t_str	substr;

	if (stop > str.len || start > stop)
		return (str_create(""));

	len = stop - start;
	substr = str_alloc(len);
	substr.len = len;

	dyn_memcpy(substr._start, str._start + start, len);
	substr._start[len] = '\0';

	return (substr);
}

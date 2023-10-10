/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:50:51 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 13:25:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_create.h"

#include <stdlib.h>

#include "dyn_memcpy.h"
#include "str_alloc.h"
#include "cstr_len.h"

t_str	str_create(t_cstr _Nonnull cstr)
{
	t_str	str;
	size_t	len;

	if (cstr == NULL)
		return ((t_str) { .get = NULL, .len = 0, ._len = 0 });

	len = cstr_len(cstr);
	str = str_alloc(len);
	str.len = len;

	dyn_memcpy(str.get, cstr, len + 1);

	return (str);
}

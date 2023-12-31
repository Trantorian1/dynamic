/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_eq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:06:15 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 09:05:36 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_eq.h"

#include <stddef.h>

#include "cstr_len.h"
#include "dyn_memcmp.h"

bool	str_eq(t_str str, t_cstr _Nonnull cstr)
{
	size_t	len;

	if (cstr == NULL)
		return (false);
	len = cstr_len(cstr);
	if (len != str.len)
		return (false);
	return (dyn_memcmp(str.get, cstr, len) == 0);
}

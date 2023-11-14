/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_eq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:23:03 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 18:19:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstr_eq.h"

#include <string.h>

#include "cstr_len.h"
#include "dyn_memcmp.h"

bool	cstr_eq(t_cstr _Nonnull cstr_a, t_cstr _Nonnull cstr_b)
{
	size_t	len;

	if (cstr_a == NULL || cstr_b == NULL)
		return (false);
	len = cstr_len(cstr_a);
	if (len != cstr_len(cstr_b))
		return (false);
	return (dyn_memcmp(cstr_a, cstr_b, len) == 0);
}

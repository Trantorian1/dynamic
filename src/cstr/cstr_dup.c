/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_dup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:05:52 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 12:08:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstr_dup.h"

#include <stddef.h>

#include "cstr_len.h"
#include "cstr_alloc.h"
#include "dyn_memcpy.h"

t_cstr	_Nullable	cstr_dup(t_cstr _Nonnull cstr)
{
	size_t	len;
	t_cstr	dup;

	if (cstr == NULL)
		return (NULL);

	len = cstr_len(cstr);
	dup = cstr_alloc(len);

	return(dyn_memcpy(dup, cstr, len));
}

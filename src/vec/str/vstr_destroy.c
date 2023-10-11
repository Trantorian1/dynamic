/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:14:22 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 16:24:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vstr_destroy.h"

#include <stddef.h>

#include "vptr_get_ptr.h"
#include "vptr_destroy.h"
#include "str_destroy.h"

void	vstr_destroy(t_vptr *_Nonnull vstr)
{
	size_t	index;

	if (vstr == NULL)
		return ;

	index = 0;
	while (index < vstr->len)
	{
		str_destroy(vptr_get_ptr(t_str, vstr, index));
		index++;
	}

	vptr_destroy(vstr);
}

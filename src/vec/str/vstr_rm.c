/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr_rm.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 23:02:14 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 14:57:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vstr_rm.h"

#include "vptr_get.h"
#include "vptr_rm.h"
#include "str_destroy.h"

t_vptr *_Nullable	vstr_rm(t_vptr *_Nonnull vstr, size_t index)
{
	if (vstr == NULL || index >= vstr->len)
		return (NULL);
	str_destroy((t_str *)vptr_get(vstr, index));
	vptr_rm(vstr, index);
	return (vstr);
}

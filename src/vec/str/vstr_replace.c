/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr_replace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 04:19:09 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 09:14:44 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vstr_replace.h"

#include "vstr_rm.h"
#include "vstr_insert.h"

t_vptr *_Nullable	vstr_replace(t_vptr *_Nonnull vstr, t_str str, size_t index)
{
	if (vstr == NULL || index >= vstr->len)
		return (NULL);
	vstr_rm(vstr, index);
	vstr_insert(vstr, str, index);
	return (vstr);
}

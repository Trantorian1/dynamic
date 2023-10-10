/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:25:19 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 14:28:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vstr_insert.h"

#include "vptr_insert.h"

t_vptr *_Nullable	vstr_insert(t_vptr *_Nonnull vstr, t_str str, size_t index)
{
	return (vptr_insert(vstr, &str, index));
}

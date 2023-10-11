/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr_append.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:08:20 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 14:09:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vstr_append.h"

#include "vptr_append.h"

t_vptr *_Nullable	vstr_append(t_vptr *_Nonnull vstr, t_str str)
{
	return (vptr_append(vstr, &str));
}

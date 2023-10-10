/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vstr_collect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:11:44 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 16:51:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vstr_collect.h"

#include "vptr_collect.h"

t_str *_Nonnull *_Nullable	vstr_collect(t_vptr *_Nonnull vstr)
{
	return ((t_str **) vptr_collect_impl(vstr));
}

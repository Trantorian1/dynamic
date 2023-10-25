/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_rm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:03:26 by marvin            #+#    #+#             */
/*   Updated: 2023/10/25 16:23:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_rm.h"

#include "dyn_memove.h"

void	str_rm(t_str *_Nonnull str, size_t start, size_t stop)
{
	if (str == NULL || start > stop || start > str->len || start == stop)
		return ;
	dyn_memove(str->get + start, str->get + stop, str->len - stop + 1);
	str->len -= stop - start;
}

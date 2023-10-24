/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_contains.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:33:23 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 13:35:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_contains.h"

#include "str_find_str.h"

bool	str_contains(t_str str, t_cstr _Nonnull target)
{
	if (target == NULL)
		return (false);

	return (str_find_str(str, target) != str.len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_eq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:23:03 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 17:24:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstr_eq.h"

#include <string.h>

bool	cstr_eq(t_cstr _Nonnull cstr_a, t_cstr _Nonnull cstr_b)
{
	if (cstr_a == NULL || cstr_b == NULL)
		return (false);

	return (strcmp(cstr_a, cstr_b) == 0);
}

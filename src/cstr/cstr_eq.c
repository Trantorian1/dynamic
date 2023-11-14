/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_eq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:23:03 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 08:58:36 by jcaron           ###   ########.fr       */
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

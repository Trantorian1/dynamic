/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:56:34 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 17:17:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstr_len.h"

#include <string.h>

size_t	cstr_len(t_cstr _Nonnull cstr)
{
	size_t	i;

	i = 0;
	if (cstr == NULL)
		return (0);
	while (cstr[i])
		++i;
	return (i);
}

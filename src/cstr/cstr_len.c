/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:56:34 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 18:16:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstr_len.h"

#include <string.h>

size_t	cstr_len(t_cstr _Nonnull cstr)
{
	size_t	len;

	if (cstr == NULL)
		return (0);
	len = 0;
	while (cstr[len] != '\0')
		++len;
	return (len);
}

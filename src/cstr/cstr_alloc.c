/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_alloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:53:27 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 08:59:30 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstr_alloc.h"

#include <stddef.h>

#include "safe_alloc.h"

/**
 * @brief Allocates memory for a string of [len] characters, setting the first
 * and len character to the null-byte.
 *
 * @param len (size_t): number of character to allocate for.
 * @return (t_cstr): null-terminated string capable of holding [len] characters.
 */
t_cstr	cstr_alloc(size_t len)
{
	t_cstr	cstr;

	cstr = safe_alloc(len + 1);
	*cstr = '\0';
	cstr[len] = '\0';
	return (cstr);
}

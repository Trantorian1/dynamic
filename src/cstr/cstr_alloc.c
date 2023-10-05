/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_alloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:53:27 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 11:54:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstr_alloc.h"

#include <stddef.h>

#include "safe_alloc.h"

t_cstr	cstr_alloc(size_t len)
{
	t_cstr	cstr;

	cstr = safe_alloc(len + 1);
	*cstr = '\0';

	return (cstr);
}

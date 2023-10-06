/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_grow_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:28:16 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 10:53:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_grow_front.h"

#include "closest_pow_2.h"
#include "safe_realloc.h"
#include "dyn_memove.h"
#include <stdio.h>

/**
 * @brief Grows a string so as to be able to append [target] bytes at the start.
 *
 * Grows to the closest power of 2 to target, maintaining back padding and
 * updating front padding.
 *
 * @param str (t_str *_Nonnull): string to grow.
 * @param target (size_t): target growth size.
 *
 * @warning This function is a library utility and should not be used by end
 * users.
 */
void	str_grow_front(t_str *_Nonnull str, size_t target)
{
	size_t	_len;

	if (str == NULL || target <= str->_len)
		return ;

	_len = closest_pow_2(target);
	str->_start = safe_realloc(str->_start, _len + 1);
	str->get = str->_start + str->_pad_front;
	str->_len = _len;
	str->_pad_front = str->_len - str->len - str->_pad_back;

	dyn_memove(str->_start + str->_pad_front, str->get, str->len + 1);
	str->get = str->_start + str->_pad_front;
}

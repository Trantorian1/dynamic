/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_grow_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:20:30 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 10:14:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_grow_back.h"

#include "closest_pow_2.h"
#include "safe_realloc.h"

/**
 * @brief Grows a string so as to be able to append [target] bytes at the end.
 *
 * Grows to the closest power of 2 to target, maintaining front padding and
 * updating back padding.
 *
 * @param str (t_str *_Nonnull): string to grow.
 * @param target (size_t): target growth size.
 *
 * @warning This function is a library utility and should not be used by end
 * users.
 */
void	str_grow_back(t_str *_Nonnull str, size_t target)
{
	size_t	_len;

	if (str == NULL || target <= str->_len)
		return ;

	_len = closest_pow_2(target);
	str->get = safe_realloc(str->get, _len + 1);
	str->_len = _len;
}

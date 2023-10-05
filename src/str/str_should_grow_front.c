/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_should_grow_front.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:56:23 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 12:57:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_should_grow_front.h"

/**
 * @brief Determines whether string should grow to reach [target] size as a
 * result of prepending.
 *
 * @param str (t_str *_Nonnull): string to check.
 * @param target (size_t): size after appending.
 * @return (bool): true if growth is needed, false otherwise.
 *
 * @warning This function is a library utility and should not be used by end
 * users.
 */
bool	str_should_grow_front(t_str *_Nonnull str, size_t target)
{
	if (str == NULL)
		return (false);

	return (target > str->len + str->_pad_front);
}

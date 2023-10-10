/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_should_grow_back.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:50:09 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 09:33:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_should_grow_back.h"

/**
 * @brief Determines whether string should grow to reach [target] size as a
 * result of appending.
 *
 * @param str (t_str *_Nonnull): string to check.
 * @param target (size_t): size after appending.
 * @return (bool): true if growth is needed, false otherwise.
 *
 * @warning This function is a library utility and should not be used by end
 * users.
 */
bool	str_should_grow_back(t_str *_Nonnull str, size_t target)
{
	if (str == NULL)
		return (false);

	return (target > str->_len);
}

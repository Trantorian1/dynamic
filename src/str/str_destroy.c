/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:15:55 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 13:27:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_destroy.h"

#include "safe_free.h"

void	str_destroy(t_str *_Nullable str)
{
	if (str == NULL)
		return ;

	safe_free(str->get);
	str->get = NULL;
	str->len = 0;
	str->_len = 0;
}

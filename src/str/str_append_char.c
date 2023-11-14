/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_append_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaron <jcaron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:46:55 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 09:10:00 by jcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_append_char.h"

#include "str_should_grow_back.h"
#include "str_grow_back.h"

void	str_append_char(t_str *_Nonnull str, char c)
{
	if (str == NULL)
		return ;
	if (str_should_grow_back(str, str->len + 1))
		str_grow_back(str, str->len + 1);
	str->get[str->len] = c;
	str->get[str->len + 1] = '\0';
	str->len++;
}

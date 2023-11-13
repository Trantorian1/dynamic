/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ui8_to_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:53:42 by marvin            #+#    #+#             */
/*   Updated: 2023/11/13 11:53:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ui8_to_str.h"

#include "str_create.h"
#include "str_insert_char.h"

t_str	ui8_to_str(uint8_t n)
{
	t_str	str;

	str = str_create("");
	while (n > 9)
	{
		str_insert_char(&str, n % 10 + '0', 0);
		n /= 10;
	}
	str_insert_char(&str, n % 10 + '0', 0);
	return (str);
}

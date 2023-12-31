/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_whitespace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 08:43:40 by marvin            #+#    #+#             */
/*   Updated: 2023/08/28 08:45:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is_whitespace.h"

#include <stdint.h>

uint8_t	is_whitespace(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

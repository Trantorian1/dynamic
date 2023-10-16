/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_letter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 05:42:45 by marvin            #+#    #+#             */
/*   Updated: 2023/09/17 05:44:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "is_letter.h"

#include <stdint.h>

#include "is_lower.h"
#include "is_upper.h"

uint8_t	is_letter(char c)
{
	return (is_lower(c) || is_upper(c));
}

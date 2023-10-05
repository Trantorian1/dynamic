/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closest_pow_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:36:23 by marvin            #+#    #+#             */
/*   Updated: 2023/08/16 13:43:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "closest_pow_2.h"

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

size_t	closest_pow_2(size_t n)
{
	uint8_t	byte_count;

	byte_count = 0;
	while (n > 0)
	{
		n >>= 1;
		byte_count++;
	}
	n = 1;
	while (byte_count--)
		n <<= 1;
	return (n);
}

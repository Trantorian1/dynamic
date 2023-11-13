/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_i64.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:02:00 by marvin            #+#    #+#             */
/*   Updated: 2023/11/13 21:11:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_to_i64.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "is_digit.h"
#include "dyn_memcmp.h"

#define INT64_MAX_STR	"9223372036854775807"
#define INT64_MIN_STR	"9223372036854775808"

#define NEGATIVE 1
#define POSITIVE 0

static inline uint8_t	handle_negative(t_str str, int64_t *_Nonnull res);
static inline uint8_t	handle_positive(t_str str, int64_t *_Nonnull res);
static inline bool		is_in_range(t_str str, int8_t sign, t_cstr _Nonnull max);

uint8_t	str_to_i64(t_str str, int64_t *_Nonnull res)
{
	if (res == NULL)
		return (EXIT_FAILURE);

	if (str.get[0] == '-' && is_in_range(str, NEGATIVE, INT64_MIN_STR))
		return (handle_negative(str, res));
	else if (is_in_range(str, POSITIVE, INT64_MAX_STR))
		return (handle_positive(str, res));

	return (EXIT_FAILURE);
}

static inline bool	is_in_range(t_str str, int8_t sign, t_cstr _Nonnull max)
{
	size_t	len;

	len = (size_t)(19 + sign);
	if (str.len > len)
		return (false);
	else if (str.len < len)
		return (true);
	else
		return (dyn_memcmp(max, str.get + sign, 19) >= 0);
}

static inline uint8_t	handle_negative(t_str str, int64_t *_Nonnull res)
{
	size_t	index;
	int64_t	val;

	val = 0;
	index = 1;

	while (index < str.len)
	{
		val *= 10;
		if (!is_digit(str.get[index]))
			return (EXIT_FAILURE);
		val -= str.get[index] - '0';
		index++;
	}
	*res = val;

	return (EXIT_SUCCESS);
}

static inline uint8_t	handle_positive(t_str str, int64_t *_Nonnull res)
{
	size_t	index;
	int64_t	val;

	val = 0;
	index = 0;

	while (index < str.len)
	{
		val *= 10;
		if (!is_digit(str.get[index]))
			return (EXIT_FAILURE);
		val += str.get[index] - '0';
		index++;
	}
	*res = val;

	return (EXIT_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstr_to_i64.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:13:53 by marvin            #+#    #+#             */
/*   Updated: 2023/11/13 21:12:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstr_to_i64.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "is_digit.h"
#include "dyn_memcmp.h"
#include "cstr_len.h"

#define INT64_MAX_STR	"9223372036854775807"
#define INT64_MIN_STR	"9223372036854775808"

#define NEGATIVE 1
#define POSITIVE 0

static inline uint8_t	handle_negative(t_cstr _Nonnull str, int64_t *_Nonnull res);
static inline uint8_t	handle_positive(t_cstr _Nonnull str, int64_t *_Nonnull res);
static inline bool		is_in_range(t_cstr _Nonnull str, int8_t sign, t_cstr _Nonnull max);

uint8_t	cstr_to_i64(t_cstr _Nonnull str, int64_t *_Nonnull res)
{
	if (res == NULL)
		return (EXIT_FAILURE);

	if (str[0] == '-' && is_in_range(str, NEGATIVE, INT64_MIN_STR))
		return (handle_negative(str, res));
	else if (is_in_range(str, POSITIVE, INT64_MAX_STR))
		return (handle_positive(str, res));

	return (EXIT_FAILURE);
}

static inline bool	is_in_range(t_cstr _Nonnull str, int8_t sign, t_cstr _Nonnull max)
{
	size_t	len_str;
	size_t	len_max;

	len_str = cstr_len(str);
	len_max = (size_t)(19 + sign);
	if (len_str > len_max)
		return (false);
	else if (len_str < len_max)
		return (true);
	else
		return (dyn_memcmp(max, str + sign, 19) >= 0);
}

static inline uint8_t	handle_negative(t_cstr _Nonnull str, int64_t *_Nonnull res)
{
	size_t	index;
	size_t	len_str;
	int64_t	val;

	val = 0;
	index = 1;
	len_str = cstr_len(str);

	while (index < len_str)
	{
		val *= 10;
		if (!is_digit(str[index]))
			return (EXIT_FAILURE);
		val -= str[index] - '0';
		index++;
	}
	*res = val;

	return (EXIT_SUCCESS);
}

static inline uint8_t	handle_positive(t_cstr _Nonnull str, int64_t *_Nonnull res)
{
	size_t	index;
	size_t	len_str;
	int64_t	val;

	val = 0;
	index = 0;
	len_str = cstr_len(str);

	while (index < len_str)
	{
		val *= 10;
		if (!is_digit(str[index]))
			return (EXIT_FAILURE);
		val += str[index] - '0';
		index++;
	}
	*res = val;

	return (EXIT_SUCCESS);
}

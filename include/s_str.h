/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_str.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:48:02 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 12:34:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_STR_H
# define S_STR_H

# ifndef STR_LEN_MIN
#  define STR_LEN_MIN 16
# endif

# include <stddef.h>

typedef struct s_str
{
	char *_Nonnull	get;
	size_t			len;
	char *_Nonnull	_start;
	size_t			_len;
	size_t			_pad_front;
	size_t			_pad_back;
}	t_str;
typedef char * t_cstr;

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_str.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:48:02 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 13:25:33 by marvin           ###   ########.fr       */
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
	size_t			len;
	char *_Nonnull	get;
	size_t			_len;
}	t_str;
typedef char * t_cstr;

#endif

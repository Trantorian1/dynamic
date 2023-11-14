/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_vptr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:25:17 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 13:43:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_VPTR_H
# define S_VPTR_H

# ifndef VEC_PTR_LEN_MIN
#  define VEC_PTR_LEN_MIN 16
# endif

# include <stddef.h>

typedef struct s_vptr
{
	void *_Nonnull	data;
	size_t			len;
	size_t			_len;
	size_t			_elem_size;
}	t_vptr;

#endif

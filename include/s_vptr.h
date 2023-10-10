/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_vptr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:25:17 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 14:50:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_VECT_PTR_H
# define S_VECT_PTR_H

# ifndef VEC_PTR_LEN_MIN
#  define VEC_PTR_LEN_MIN 16
# endif

# include <stddef.h>

typedef struct s_vptr
{
	void *_Nonnull				_start;
	size_t						len;
	size_t						_len;
	size_t						_elem_size;
	void *_Nonnull *_Nonnull	_garbage;
	size_t						_len_garbage;
}	t_vptr;

#endif

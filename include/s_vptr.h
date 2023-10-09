/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_vptr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:25:17 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:25:32 by marvin           ###   ########.fr       */
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
	size_t						len;
	void *_Nonnull				_start;
	size_t						_elem_size;
	size_t						_len;
	size_t						_pad_front;
	size_t						_pad_back;
	void *_Nonnull *_Nonnull	_garbage;
	size_t						_len_garbage;
}	t_vptr;

#endif

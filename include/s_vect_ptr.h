/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_vect_ptr.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:25:17 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 14:27:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_VECT_PTR_H
# define S_VECT_PTR_H

# ifndef VECT_PTR_LEN_MIN
#  define VECT_PTR_LEN_MIN 16
# endif

# include <stddef.h>

typedef struct s_vect_ptr
{
	size_t			len;
	void *_Nonnull	_start;
	void *_Nonnull	_data;
	size_t			_elem_size;
	size_t			_len;
	size_t			_pad_front;
	size_t			_pad_back;
}	t_vptr;

#endif

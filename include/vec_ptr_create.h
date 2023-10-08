/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ptr_create.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:29:01 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 14:08:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PTR_CREATE_H
# define VEC_PTR_CREATE_H

# include <stddef.h>
# include "s_vect_ptr.h"

# define vec_ptr_create(TYPE, n) vect_ptr_create_impl(sizeof(TYPE), n)

t_vptr *_Nonnull	vec_ptr_create_impl(size_t elem_size, size_t n);

#endif

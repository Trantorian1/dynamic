/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ptr_grow_back.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:03:00 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 14:20:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PTR_GROW_BACK_H
# define VEC_PTR_GROW_BACK_H

# include <stddef.h>
# include "s_vect_ptr.h"

void	vec_ptr_grow_back(t_vptr *_Nonnull vptr, size_t target);

#endif

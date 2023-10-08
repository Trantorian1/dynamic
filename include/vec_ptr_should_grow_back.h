/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ptr_should_grow_back.h                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:58:20 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 14:09:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PTR_SHOULD_GROW_BACK_H
# define VEC_PTR_SHOULD_GROW_BACK_H

# include <stdbool.h>
# include <stddef.h>
# include "s_vect_ptr.h"

bool	vec_ptr_should_grow_back(t_vptr *vptr, size_t target);

#endif

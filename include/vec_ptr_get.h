/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ptr_get.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:51:51 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 14:09:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PTR_GET_H
# define VEC_PTR_GET_H

# include <stddef.h>
# include "s_vect_ptr.h"

void *_Nullable	vec_ptr_get(t_vptr *_Nonnull vptr, size_t index);

#endif

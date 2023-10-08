/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ptr_append.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:01:07 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 14:07:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PTR_APPEND_H
# define VEC_PTR_APPEND_H

# include "s_vect_ptr.h"

t_vptr *_Nullable	vec_ptr_append(
	t_vptr *_Nonnull vptr,
	void *_Nonnull val
);

#endif

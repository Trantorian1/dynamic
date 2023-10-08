/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ptr_destroy_data.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:47:22 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 16:50:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_PTR_DESTROY_DATA_H
# define VEC_PTR_DESTROY_DATA_H

# include "s_vect_ptr.h"

void	vec_ptr_destroy_data(
	t_vptr *_Nonnull vptr,
	void (*f)(void *_Nullable)
);

#endif

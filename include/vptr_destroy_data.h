/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_destroy_data.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 16:47:22 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:39:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_DESTROY_DATA_H
# define VPTR_DESTROY_DATA_H

# include "s_vptr.h"

void	vptr_destroy_data(
	t_vptr *_Nonnull vptr,
	void (*_Nonnull f)(void *_Nullable)
);

#endif

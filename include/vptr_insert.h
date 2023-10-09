/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_insert.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:03:03 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 14:06:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_INSERT_H
# define VPTR_INSERT_H

# include <stddef.h>
# include "s_vptr.h"

t_vptr *_Nullable	vptr_insert(
	t_vptr *_Nonnull vptr,
	void *_Nonnull data,
	size_t index
);

#endif

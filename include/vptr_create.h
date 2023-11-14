/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_create.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:29:01 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 13:43:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_CREATE_H
# define VPTR_CREATE_H

# include <stddef.h>
# include "s_vptr.h"

t_vptr *_Nonnull	vptr_create(size_t elem_size, size_t n);

#endif

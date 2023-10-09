/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_should_grow_back.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:58:20 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:29:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_SHOULD_GROW_BACK_H
# define VPTR_SHOULD_GROW_BACK_H

# include <stdbool.h>
# include <stddef.h>
# include "s_vptr.h"

bool	vptr_should_grow_back(t_vptr *vptr, size_t target);

#endif

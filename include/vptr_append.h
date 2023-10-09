/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_append.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:01:07 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 09:25:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_APPEND_H
# define VPTR_APPEND_H

# include "s_vptr.h"

t_vptr *_Nullable	vptr_append(
	t_vptr *_Nonnull vptr,
	void *_Nonnull val
);

#endif

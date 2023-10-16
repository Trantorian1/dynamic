/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_last.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:08:26 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 13:56:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_LAST_H
# define VPTR_LAST_H

# include <stddef.h>
# include "s_vptr.h"

# define vptr_last(type, vptr) \
	(vptr != NULL && vptr->len != 0 ? \
	((type *)vptr->data)[vptr->len - 1] : *(type[]) { 0 })

#endif

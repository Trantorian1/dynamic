/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_get.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:51:51 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 16:32:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_GET_H
# define VPTR_GET_H

# include <stddef.h>
# include "s_vptr.h"

# define vptr_get(type, vptr, index) \
	(vptr != NULL && index < vptr->len ? \
	((type *)vptr->_start)[index] : *(type[]) { 0 })

#endif

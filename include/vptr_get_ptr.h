/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_get_ptr.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:23:22 by marvin            #+#    #+#             */
/*   Updated: 2023/10/11 14:58:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VPTR_GET_PTR_H
# define VPTR_GET_PTR_H

# define vptr_get_ptr(type, vptr, index) \
	(vptr != NULL && index < vptr->len ? \
	((type *)vptr->data) + index : NULL)

#endif

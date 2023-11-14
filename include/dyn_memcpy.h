/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memcpy.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:00:44 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 14:48:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_MEMCPY_H
# define DYN_MEMCPY_H

# include <stddef.h>

void *_Nullable	dyn_memcpy(void *_Nonnull dst, void *_Nonnull src, size_t n);

#endif

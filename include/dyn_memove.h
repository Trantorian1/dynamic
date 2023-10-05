/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memove.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:03:14 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 12:04:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_MEMOVE_H
# define DYN_MEMOVE_H

# include <stddef.h>

void *_Nullable	dyn_memove(void *_Nonnull dst, void *_Nonnull src, size_t n);

#endif

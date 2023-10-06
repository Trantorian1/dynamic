/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:39:30 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 12:41:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

# include <stddef.h>

void *_Nullable dyn_memcpy(void *_Nonnull dst, void *_Nonnull src, size_t n);
void *_Nullable	dyn_memove(void *_Nonnull dst, void *_Nonnull src, size_t n);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memset.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:52:43 by marvin            #+#    #+#             */
/*   Updated: 2023/10/10 16:54:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_MEMSET_H
# define DYN_MEMSET_H

# include <stddef.h>
# include <stdint.h>

void *_Nullable	dyn_memset(void *_Nonnull ptr, uint8_t bit, size_t n);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memdup.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:02:11 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 15:04:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_MEMDUP_H
# define DYN_MEMDUP_H

# include <stddef.h>

void *_Nullable	dyn_memdup(void *_Nonnull src, size_t bytes);

#endif

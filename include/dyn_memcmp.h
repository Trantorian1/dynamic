/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_memcmp.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:57:32 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 12:02:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_MEMCMP_H
# define DYN_MEMCMP_H

# include <stddef.h>
# include <stdint.h>

int32_t	dyn_memcmp(void *_Nonnull ptr_a, void *_Nonnull ptr_b, size_t bytes);

#endif

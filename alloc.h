/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:42:46 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 12:44:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOC_H
# define ALLOC_H

# include <stddef.h>

void *_Nonnull	safe_alloc(size_t bytes);
void *_Nonnull	safe_realloc(void *_Nonnull ptr, size_t size);
void			safe_free(void *_Nullable ptr);
void			safe_free_all(void);

#endif

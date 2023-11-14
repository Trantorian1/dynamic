/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 07:30:53 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 15:04:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# ifndef VEC_PTR_LEN_MIN
#  define VEC_PTR_LEN_MIN 16
# endif

# include "struct.h"

t_vptr *_Nonnull	vptr_create(size_t elem_size, size_t n);
void *_Nullable		vptr_get(t_vptr *_Nonnull vptr, size_t index);
void *_Nullable		vptr_last(t_vptr *_Nonnull vptr);
void *_Nullable		vptr_collect(t_vptr *_Nonnull vptr);
t_vptr *_Nonnull	vptr_create_impl(size_t elem_size, size_t n);
void				vptr_destroy(t_vptr *_Nullable vptr);
t_vptr *_Nullable	vptr_append(t_vptr *_Nonnull vptr, void *_Nullable val);
t_vptr *_Nullable	vptr_join(t_vptr *_Nonnull vptr_a, t_vptr *_Nonnull vptr_b);
t_vptr *_Nullable	vptr_insert(t_vptr *_Nonnull vptr, void *_Nonnull data, size_t index);
t_vptr *_Nullable	vptr_rm(t_vptr *_Nonnull vptr, size_t index);
void *_Nullable		vptr_collect_impl(t_vptr *_Nonnull vptr);

t_vptr *_Nullable	vstr_append(t_vptr *_Nonnull vstr, t_str str);
void				vstr_destroy(t_vptr *_Nonnull vstr);
t_vptr *_Nullable	vstr_insert(t_vptr *_Nonnull vstr, t_str str, size_t index);
t_vptr *_Nullable	vstr_rm(t_vptr *_Nonnull vstr, size_t index);
t_vptr *_Nullable	vstr_replace(t_vptr *_Nonnull vstr, t_str str, size_t index);

#endif

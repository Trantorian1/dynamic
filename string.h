/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 12:42:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# ifndef STR_LEN_MIN
#  define STR_LEN_MIN 16
# endif

# include "struct.h"

t_str *_Nullable	str_create(t_cstr _Nonnull cstr);
void				str_destroy(t_str *_Nullable str);
t_str *_Nullable	str_append_char(t_str *_Nonnull str, char c);
t_str *_Nullable	str_append_str(t_str *_Nonnull str, t_cstr _Nonnull cstr);
t_str *_Nullable	str_prepend_char(t_str *_Nonnull str, char c);
t_str *_Nullable	str_prepend_str(t_str *_Nonnull str, t_cstr _Nonnull cstr);
t_str *_Nullable	str_insert_char(t_str *_Nonnull str, char c, size_t index);
t_str *_Nullable	str_insert_str(t_str *_Nonnull str, t_cstr _Nonnull cstr, size_t index);

t_cstr				cstr_alloc(size_t len);
t_cstr _Nullable	cstr_dup(t_cstr _Nonnull cstr);
size_t				cstr_len(t_cstr _Nonnull cstr);

#endif

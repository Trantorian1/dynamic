/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:34 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 07:29:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# ifndef STR_LEN_MIN
#  define STR_LEN_MIN 16
# endif

# include <stdbool.h>
# include "struct.h"

t_str 				str_alloc(size_t len);
t_str *_Nullable	str_create(t_cstr _Nonnull cstr);
void				str_destroy(t_str *_Nullable str);
t_str *_Nullable	str_append_char(t_str *_Nonnull str, char c);
t_str *_Nullable	str_append_str(t_str *_Nonnull str, t_cstr _Nonnull cstr);
t_str *_Nullable	str_prepend_char(t_str *_Nonnull str, char c);
t_str *_Nullable	str_prepend_str(t_str *_Nonnull str, t_cstr _Nonnull cstr);
t_str *_Nullable	str_insert_char(t_str *_Nonnull str, char c, size_t index);
t_str *_Nullable	str_insert_str(t_str *_Nonnull str, t_cstr _Nonnull cstr, size_t index);
t_str *_Nullable	str_substr(t_str *_Nonnull str, size_t start, size_t stop);
size_t				str_find_char(t_str *_Nonnull str, char c);
t_vptr *_Nullable	str_split(t_str str, t_cstr _Nonnull pattern);

t_cstr _Nullable	cstr_alloc(size_t len);
t_cstr _Nullable	cstr_dup(t_cstr _Nonnull cstr);
size_t				cstr_len(t_cstr _Nonnull cstr);
size_t				cstr_find_cstr(t_cstr _Nonnull cstr_a, t_cstr _Nonnull cstr_b);
bool				cstr_eq(t_cstr _Nonnull cstr_a, t_cstr _Nonnull cstr_b);

#endif

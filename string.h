/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:34 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 16:38:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# ifndef STR_LEN_MIN
#  define STR_LEN_MIN 16
# endif

# include <stdbool.h>
# include <stdint.h>
# include "struct.h"

t_str				str_alloc(size_t len);
t_str				str_create(t_cstr _Nonnull cstr);
void				str_destroy(t_str *_Nullable str);
void				str_append_char(t_str *_Nonnull str, char c);
void				str_append_str(t_str *_Nonnull str, t_cstr _Nonnull cstr);
void				str_insert_char(t_str *_Nonnull str, char c, size_t index);
void				str_insert_str(t_str *_Nonnull str, t_cstr _Nonnull cstr,
						size_t index);
void				str_rm(t_str *_Nonnull str, size_t start, size_t stop);
t_str				str_substr(t_str str, size_t start, size_t stop);
size_t				str_find_char(t_str str, char c);
size_t				str_find_str(t_str str, t_cstr _Nonnull target);
t_vptr *_Nullable	str_split(t_str str, t_cstr _Nonnull pattern);
bool				str_eq(t_str str, t_cstr _Nonnull cstr);
bool				str_contains(t_str str, t_cstr _Nonnull target);

t_cstr _Nullable	cstr_alloc(size_t len);
t_cstr _Nullable	cstr_dup(t_cstr _Nonnull cstr);
size_t				cstr_len(t_cstr _Nonnull cstr);
size_t				cstr_find_cstr(t_cstr _Nonnull cstr_a,
						t_cstr _Nonnull cstr_b);
bool				cstr_eq(t_cstr _Nonnull cstr_a, t_cstr _Nonnull cstr_b);

t_str				ui8_to_str(uint8_t n);
uint8_t				str_to_i64(t_str str, int64_t *_Nonnull res);
uint8_t				cstr_to_i64(t_cstr _Nonnull str, int64_t *_Nonnull res);

#endif

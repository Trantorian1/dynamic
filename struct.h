/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:35:32 by marvin            #+#    #+#             */
/*   Updated: 2023/11/14 16:37:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include <stddef.h>

typedef struct s_str
{
	size_t			len;
	char *_Nonnull	get;
	size_t			_len;
}	t_str;
typedef char	*t_cstr;

typedef struct s_cell
{
	struct s_cell *_Nullable	prev;
	struct s_cell *_Nullable	next;
	size_t						bytes;
}	t_cell;

typedef struct s_vptr
{
	void *_Nonnull				data;
	size_t						len;
	size_t						_len;
	size_t						_elem_size;
}	t_vptr;

#endif

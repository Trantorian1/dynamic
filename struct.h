/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:35:32 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 12:36:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include <stddef.h>

typedef struct s_str
{
	char *_Nonnull	get;
	size_t			len;
	char *_Nonnull	_start;
	size_t			_len;
	size_t			_pad_front;
	size_t			_pad_back;
}	t_str;
typedef char * t_cstr;

typedef struct s_cell
{
	struct s_cell *_Nullable	prev;
	struct s_cell *_Nullable	next;
	size_t						bytes;
}	t_cell;

#endif

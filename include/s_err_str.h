/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_err_str.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:01:45 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 13:15:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef S_ERR_STR_H
# define S_ERR_STR_H

# include <stdint.h>
# include "d_err.h"
# include "s_str.h"

typedef struct s_err_str
{
	uint8_t	err_code;
	t_str	val;
}	t_err_str;

#endif

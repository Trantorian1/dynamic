/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_ptr_destroy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:45:04 by marvin            #+#    #+#             */
/*   Updated: 2023/10/08 15:42:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_ptr_destroy.h"

#include <stdlib.h>

#include "vec_ptr_get.h"
#include "safe_free.h"

void	vec_ptr_destroy(t_vptr *_Nullable vptr)
{
	if (vptr == NULL)
		return ;

	safe_free(vptr->_start);
	vptr->_start = NULL;
	vptr->_data = NULL;
	safe_free(vptr);
}

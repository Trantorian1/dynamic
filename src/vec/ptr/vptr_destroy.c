/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vptr_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:45:04 by marvin            #+#    #+#             */
/*   Updated: 2023/10/11 14:57:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vptr_destroy.h"

#include <stdlib.h>

#include "vptr_get.h"
#include "safe_free.h"

void	vptr_destroy(t_vptr *_Nullable vptr)
{
	if (vptr == NULL)
		return ;

	safe_free(vptr->data);
	vptr->data = NULL;
	safe_free(vptr);
}

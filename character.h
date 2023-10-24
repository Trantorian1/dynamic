/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 05:45:21 by marvin            #+#    #+#             */
/*   Updated: 2023/10/16 13:04:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <stdint.h>

uint8_t	is_lower(char c);
uint8_t	is_upper(char c);
uint8_t	is_letter(char c);
uint8_t	is_digit(char c);
uint8_t	is_whitespace(char c);

#endif

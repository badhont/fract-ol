/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badhont <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 22:48:53 by badhont           #+#    #+#             */
/*   Updated: 2018/10/11 00:00:02 by badhont          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

int		ft_isnumber(char *str)
{
	if (*str == '-' && (*(str + 1) >= '0' && *(str + 1) <= '9'))
		str++;
	while (*str)
	{
		if (!(*str >= '0' && *str++ <= '9'))
			return (0);
	}
	return (1);
}

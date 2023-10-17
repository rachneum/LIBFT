/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rachou <rachou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:49:44 by rachou            #+#    #+#             */
/*   Updated: 2023/10/17 19:05:27 by rachou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	char		sign;
	long int	rlt;
	long int	tmp;

	rlt = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		tmp = rlt;
		rlt = rlt * 10 + *str - 48;
		str++;
		if (rlt < tmp && sign == 1)
			return (-1);
		if (rlt < tmp && sign == -1)
			return (0);
	}
	return (rlt * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rachou <rachou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 16:17:19 by raneuman          #+#    #+#             */
/*   Updated: 2023/10/17 19:04:51 by rachou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_chr(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (s);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*dst;
	char			sign;
	long int		len_n;
	unsigned int	number;

	sign = 1;
	len_n = ft_len(n);
	dst = (char *)malloc(sizeof(char) *(len_n + 1));
	if (!dst)
		return (NULL);
	dst[len_n--] = '\0';
	if (n == 0)
		dst[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = -1 * n;
		dst[0] = '-';
	}
	else
		number = n;
	dst = ft_chr(dst, number, len_n);
	return (dst);
}

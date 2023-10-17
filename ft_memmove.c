/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:46:12 by rachou            #+#    #+#             */
/*   Updated: 2023/07/17 11:23:41 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			j;
	unsigned char	*dest;
	unsigned char	*source;

	i = 0;
	j = 1;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!dest && !source)
		return (NULL);
	if (dest > source)
	{
		j = -1;
		dest += len - 1;
		source += len - 1;
	}
	while (i < len)
	{
		*dest = *source;
		dest += j;
		source += j;
		i++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:16:30 by rachou            #+#    #+#             */
/*   Updated: 2023/07/17 12:12:18 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	if (!dst && dstsize == 0)
		return (0);
	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize == 0 || dstsize <= lendst)
		return (lensrc + dstsize);
	while (src[i] && i < dstsize - lendst - 1)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	if (dstsize != 0 && lendst + i < dstsize)
		dst[lendst + i] = '\0';
	return (lendst + lensrc);
}

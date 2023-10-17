/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:37:28 by rachou            #+#    #+#             */
/*   Updated: 2023/07/17 11:24:50 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkchr(char const *str, char const c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_checkchr(set, *s1))
		s1++;
	size = ft_strlen(s1);
	while (size != 0 && ft_checkchr(set, s1[size - 1]))
		size--;
	dst = (char *)malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, (char *)s1, size + 1);
	return (dst);
}

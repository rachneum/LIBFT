/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:31:54 by rachou            #+#    #+#             */
/*   Updated: 2023/07/17 11:24:40 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *find, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!find && !len)
		return (0);
	if (to_find[0] == '\0' || to_find == find)
		return ((char *)find);
	while (find[i] != '\0')
	{
		j = 0;
		while (find[i + j] == to_find[j] && (i + j) < len)
		{
			if (find[i + j] == '\0' && to_find[j] == '\0')
				return ((char *)&find[i]);
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)(find + i));
		i++;
	}
	return (0);
}

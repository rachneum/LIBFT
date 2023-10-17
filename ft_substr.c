/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raneuman <raneuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:37:44 by rachou            #+#    #+#             */
/*   Updated: 2023/07/17 11:24:56 by raneuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	size;
	char	*rlt;

	size = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len_s > start)
		size = len_s - start;
	if (size > len)
		size = len;
	if (start > len_s)
		start = len_s;
	rlt = (char *)malloc(sizeof(char) * (size + 1));
	if (!rlt)
		return (NULL);
	ft_strlcpy(rlt, (char *)&s[start], size + 1);
	return (rlt);
}

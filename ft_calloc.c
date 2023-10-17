/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rachou <rachou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:11:38 by rachou            #+#    #+#             */
/*   Updated: 2023/09/26 18:30:27 by rachou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;
	size_t	leng;

	leng = count * size;
	if (size != 0 && leng / size != count)
		return (0);
	array = (void *)malloc(leng);
	if (!array)
		return (NULL);
	ft_bzero(array, leng);
	return (array);
}

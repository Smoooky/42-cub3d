/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:37:11 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 19:37:12 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
					size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			count;

	count = 0;
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	while (count < n)
	{
		if (p2[count] == (unsigned char ) c)
		{
			p1[count] = p2[count];
			count++;
			return ((void *)p1 + count);
		}
		p1[count] = p2[count];
		count++;
	}
	return (NULL);
}

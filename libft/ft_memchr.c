/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:37:20 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 19:37:21 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)arr;
	while (n-- != 0)
	{
		if (*p == (unsigned char) c)
			return (p);
		p++;
	}
	return (NULL);
}

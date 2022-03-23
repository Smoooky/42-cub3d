/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:40:44 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 19:40:45 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t n)
{
	size_t	len_2;

	len_2 = ft_strlen(src);
	if (src[0] == '\0')
		return ((char *) dst);
	while (*dst != '\0' && n-- >= len_2)
	{
		if (*dst == *src && ft_memcmp(dst, src, len_2) == 0)
			return ((char *) dst);
		dst++;
	}
	return (NULL);
}

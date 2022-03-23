/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:40:05 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 19:40:06 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len_dst;
	size_t	len_src;
	int		i;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (n < len_dst)
		return (len_src + n);
	while (src[i] && (len_dst + i + 1) < n)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

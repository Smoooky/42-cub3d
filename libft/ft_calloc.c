/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:17:12 by jmacmill          #+#    #+#             */
/*   Updated: 2022/01/27 20:18:17 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*arr;
	size_t	i;

	i = 0;
	arr = malloc(size * num);
	if (!arr)
		return (NULL);
	while (i < (num * size))
	{
		arr[i] = '\0';
		i++;
	}
	return ((void *) arr);
}

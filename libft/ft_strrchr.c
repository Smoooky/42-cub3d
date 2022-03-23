/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:40:49 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 19:40:50 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;

	i = (size_t) ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i--;
	}
	if (str[i] == ch)
		return ((char *)str + i);
	return (NULL);
}

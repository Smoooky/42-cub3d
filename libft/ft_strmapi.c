/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:40:25 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 19:40:26 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *c, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*arr;
	size_t			len_c;

	i = 0;
	if (!c || !f)
		return (NULL);
	len_c = ft_strlen(c);
	arr = (char *)malloc(sizeof(char) * (len_c + 1));
	if (!arr)
		return (NULL);
	while (c[i])
	{
		arr[i] = (*f)(i, c[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:17:22 by jmacmill          #+#    #+#             */
/*   Updated: 2022/01/27 20:18:17 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(const char *s, char c)
{
	int		len;
	size_t	j;

	j = 0;
	len = 0;
	while (s[len])
	{
		while (s[len] == c && s[len] != '\0')
			len++;
		if (s[len] != c && s[len])
			j++;
		while (s[len] != c && s[len])
			len++;
	}
	return (j);
}

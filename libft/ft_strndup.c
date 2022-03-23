/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:40:38 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 19:40:39 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *s, size_t n)
{
	char	*str;

	str = (char *) malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	str = ft_mystrncpy(str, s, n);
	return (str);
}

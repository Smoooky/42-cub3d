/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_quote.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:39:14 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 19:39:15 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_quote(const char *str, int ch)
{
	char	*p;
	char	*end;

	p = (char *)str;
	if (!p)
		return (p);
	while (*p && *p != ch)
	{
		if (*p == '"' || *p == '\'')
		{
			end = ft_strchr(p + 1, *p);
			p += end - p + 1;
		}
		else
			p++;
	}
	if (*p == ch)
		return (p);
	return (NULL);
}

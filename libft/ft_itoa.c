/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 19:37:00 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 19:37:02 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter_and_minus(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len += 1;
		n *= -1;
	}
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	writer(int n, char *arr, int len_arr)
{
	while (n)
	{
		arr[len_arr - 1] = (n % 10) + '0';
		n /= 10;
		len_arr--;
	}
}

char	*ft_itoa(int n)
{
	int		len_arr;
	char	*arr;

	if (n <= -2147483648)
		return (ft_strdup("-2147483648"));
	len_arr = counter_and_minus(n);
	arr = (char *) malloc(sizeof(char) * len_arr + 1);
	if (arr)
	{
		if (n == 0)
			arr[0] = '0';
		if (n < 0)
		{
			arr[0] = '-';
			n = -n;
		}
		arr[len_arr] = '\0';
		writer(n, arr, len_arr);
		return (arr);
	}
	return (NULL);
}

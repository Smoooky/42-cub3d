/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:18:28 by jmacmill            #+#    #+#             */
/*   Updated: 2022/01/27 20:18:17 by jmacmill           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Created by Mickey Rudge on 5/3/21.
//

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

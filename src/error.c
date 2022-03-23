/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:33:32 by sstyr             #+#    #+#             */
/*   Updated: 2022/03/23 19:44:50 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

int	ft_exit(t_raycast *rc)
{
	if (rc->data.img)
		mlx_destroy_image(rc->data.mlx_ptr, rc->data.img);
	if (rc->texture[0].img)
		mlx_destroy_image(rc->data.mlx_ptr, rc->texture[0].img);
	if (rc->texture[1].img)
		mlx_destroy_image(rc->data.mlx_ptr, rc->texture[1].img);
	if (rc->texture[2].img)
		mlx_destroy_image(rc->data.mlx_ptr, rc->texture[2].img);
	if (rc->texture[3].img)
		mlx_destroy_image(rc->data.mlx_ptr, rc->texture[3].img);
	if (rc->data.mlx_win)
		mlx_destroy_window(rc->data.mlx_ptr, rc->data.mlx_win);
	exit(0);
}

void	ft_error(t_raycast *rc, char *str)
{
	int	i;

	i = -1;
	rc->error = 1;
	write(1, "Error\n", 6);
	write(1, str, ft_strlen(str));
	ft_exit(rc);
}

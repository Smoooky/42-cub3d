/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:37:09 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 18:14:27 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	init_player(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->map[i])
	{
		j = 0;
		while (data->map[i][j])
		{
			if (data->map[i][j] == data->plr_ch)
			{
				data->plr_x = j;
				data->plr_y = i;
				return ;
			}
			j++;
		}
		i++;
	}
}

void	my_parsing_values(int a, int *i, t_data *data)
{
	if (a == 1)
	{
		(*i) += 2;
		parse_values(i, data, &(data->no));
	}
	if (a == 2)
	{
		(*i) += 2;
		parse_values(i, data, &(data->so));
	}
	if (a == 3)
	{
		(*i) += 2;
		parse_values(i, data, &(data->so));
	}
	if (a == 4)
	{
		(*i) += 2;
		parse_values(i, data, &(data->so));
	}
}

void	init_data(t_data *data)
{
	data->ceiling = -10;
	data->floor = -10;
	data->file = NULL;
	data->map = NULL;
	data->ea = NULL;
	data->no = NULL;
	data->so = NULL;
	data->we = NULL;
}

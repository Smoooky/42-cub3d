/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:37:05 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 18:37:08 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	read_map(int i, t_data *data)
{
	while (data->file[i] && (data->file[i] == ' '
			|| data->file[i] == '\t' || data->file[i] == '\n'))
		++i;
	if (data->file[i] != '1' && data->file[i] != '0')
	{
		write(1, "Error: not an 1 an 0\n", 21);
		exit(1);
	}
	else
	{
		if (data->file[i] == '0')
		{
			write(1, "Error: map is open\n", 19);
			exit(1);
		}
		else
			make_array_map(i, data);
	}
	map_error(data);
}

void	check_data(t_data *data)
{
	if (data->ea == NULL || data->no == NULL || data->so == NULL \
	|| data->we == NULL)
	{
		write(1, "Error: blank parameter\n", 23);
		exit(1);
	}
	if (access(data->ea, R_OK) != 0 || access(data->no, R_OK) != 0 \
	|| access(data->so, R_OK) != 0 || access(data->we, R_OK) != 0)
	{
		write(1, "Error: unable to get access to the textures\n", 44);
		exit(1);
	}
	if (check_extension(data))
	{
		write(1, "Error: incorrect extension in textures\n", 39);
		exit(1);
	}
}

void	get_features(int *i, t_data *data)
{
	while (data->file[*i] && (data->file[*i] == ' ' \
	|| data->file[*i] == '\t' || data->file[*i] == '\n'))
		(*i)++;
	if (check_value("NO", *i, data))
		my_parsing_values(1, i, data);
	else if (check_value("SO", *i, data))
		my_parsing_values(2, i, data);
	else if (check_value("WE", *i, data))
		my_parsing_values(3, i, data);
	else if (check_value("EA", *i, data))
		my_parsing_values(4, i, data);
	else if (check_color('C', *i, data))
	{
		(*i) += 1;
		parse_color(i, data, 'C');
	}
	else if (check_color('F', *i, data))
	{
		write(1, "parse F\n", 8);
		(*i) += 1;
		parse_color(i, data, 'F');
	}
}

int	complete(t_data *data)
{
	if (data->ceiling != -10 && data->floor != -10 && \
		data->ea && data->no && data->so && data->we)
	{
		return (1);
	}
	return (0);
}

void	parse_data(t_data *data)
{
	int	i;

	i = 0;
	while (data->file[i])
	{
		if (complete(data))
			break ;
		get_features(&i, data);
		i++;
	}
	check_data(data);
	read_map(i, data);
}

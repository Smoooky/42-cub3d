/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmacmill <jmacmill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:36:57 by jmacmill          #+#    #+#             */
/*   Updated: 2022/03/23 18:03:59 by jmacmill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	check_numbers(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
			{
				printf("%c\n", str[i][j]);
				write(1, "Error: not a number\n", 20);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

static void	incorrect_rgb(void)
{
	write(1, "Error: incorrect rgb format\n", 28);
	exit(1);
}

void	get_values(char *str, char color, t_data *data)
{
	char		**param;
	int			commas;
	long long	r;
	long long	g;
	long long	b;

	commas = ft_count(str, ',');
	param = (char **)malloc(sizeof(char *) * commas + 1);
	if (!param)
		exit(1);
	param = ft_split(str, ',');
	check_numbers(param);
	r = ft_atoi(param[0]);
	g = ft_atoi(param[1]);
	b = ft_atoi(param[2]);
	if (r > 255 || g > 255 || b > 255)
		incorrect_rgb();
	if (color == 'F')
		data->floor = to_hex(r, g, b);
	else if (color == 'C')
		data->ceiling = to_hex(r, g, b);
	if (param)
		free_param(param);
}

void	parse_color(int *i, t_data *data, char color)
{
	int		pos;
	char	*str;

	while (data->file[*i] && data->file[*i] != '\n' \
	&& (data->file[*i] == ' ' || data->file[*i] == '\t'))
		(*i)++;
	pos = *i;
	if (data->file[*i] == ',' || data->file[*i] == '\n')
	{
		write(1, "Error: comma or eof has been identified\n", 40);
		exit(1);
	}
	while (data->file[*i] && data->file[*i] != '\n')
		(*i)++;
	if (pos == *i)
	{
		write(1, "Error: values are missing\n", 26);
		exit(1);
	}
	else
	{
		str = ft_substr(data->file, pos, (*i) - pos);
		get_values(str, color, data);
	}
}

int	check_color(char color, int i, t_data *data)
{
	if (data->file[i] == color)
	{
		if (data->file[i + 1] == ' ' || data->file[i + 1] == '\t')
			return (1);
		else
		{
			write(1, "Error: bad pathway for color\n", 19);
			exit(1);
		}
	}
	return (0);
}

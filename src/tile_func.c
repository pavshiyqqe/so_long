/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tile_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:31:47 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:31:47 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_player(t_tile tile)
{
	return (tile.value == 'P' || tile.value == 't' || tile.value == 'b'
		|| tile.value == 'l' || tile.value == 'r');
}

int	is_enemy(t_tile tile)
{
	return (tile.value == 'S' || tile.value == 'T' || tile.value == 'B'
		|| tile.value == 'L' || tile.value == 'R');
}

void	propagate2(int x, int y, char **map)
{
	map[y][x] = '2';
	if (map[y - 1][x] != '1' && map[y - 1][x] != '2')
		propagate2(x, y - 1, map);
	if (map[y + 1][x] != '1' && map[y + 1][x] != '2')
		propagate2(x, y + 1, map);
	if (map[y][x - 1] != '1' && map[y][x - 1] != '2')
		propagate2(x - 1, y, map);
	if (map[y][x + 1] != '1' && map[y][x + 1] != '2')
		propagate2(x + 1, y, map);
}

int	check_old_paths(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
				propagate2(j, i, map);
			j++;
		}
		i++;
	}
	return (check_value_occ(map, 'E') == 0 && check_value_occ(map, 'C') == 0);
}

void	check_map2(char *path)
{
	char	**map;
	int		i;

	map = load_map(path);
	if (!check_ber(path))
	{
		ft_printf("Error\nMap \"%s\" %s\n", path, "wrong ext,hidden");
		exit(0);
	}
	else if (!check_old_paths(map))
	{
		ft_printf("Error\nMap \"%s\" %s\n", path, "doesn't have a solution.");
		exit(0);
	}
	i = 0;
	while (map[i])
		free(map[i++]);
	free(map);
}

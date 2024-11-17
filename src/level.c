/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   level.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:30:52 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:30:52 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_level	init_level(char *path)
{
	t_level	level;

	get_size(&level, path);
	get_tiles(&level, path);
	get_player_and_exit(&level);
	get_enemies_c(&level);
	get_enemies_v(&level);
	get_coins_c(&level);
	get_coins_v(&level);
	level.move_c = 0;
	level.coins_found = 0;
	level.finished = 0;
	level.moved = 1;
	return (level);
}

void	free_level(t_level *level)
{
	int	i;

	i = 0;
	while (i < level->size.h)
	{
		free(level->tiles[i]);
		i++;
	}
	free(level->tiles);
	free(level->enemies_v);
	free(level->coins_v);
}

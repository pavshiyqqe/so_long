/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:31:43 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:31:43 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_size	init_size(int w, int h)
{
	t_size	size;

	size.w = w;
	size.h = h;
	return (size);
}

t_position	init_position(int x, int y)
{
	t_position	position;

	position.x = x;
	position.y = y;
	return (position);
}

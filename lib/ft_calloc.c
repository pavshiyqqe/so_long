/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:02:08 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:02:08 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int num_elements, int size_of_element)
{
	unsigned char	*result;
	int				i;

	result = (unsigned char *) malloc(num_elements * size_of_element);
	if (!result)
		return (0);
	i = 0;
	while (i < num_elements * size_of_element)
	{
		result[i] = 0;
		i++;
	}
	return ((void *) result);
}

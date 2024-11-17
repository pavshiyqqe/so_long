/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:04:42 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:04:42 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (num == 0 || dest == src)
		return (dest);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	while (i < num)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

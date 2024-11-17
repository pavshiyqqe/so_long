/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:04:46 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:04:46 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	unsigned char		*d;
	const unsigned char	*s;
	int					i;

	if (n == 0 || dest == src)
		return (dest);
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	i = (d >= s) * (n - 1);
	if (d >= s)
	{
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

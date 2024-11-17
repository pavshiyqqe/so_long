/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:05:37 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:05:37 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	u_c;
	int				i;

	u_c = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == u_c)
			return ((char *)&s[i]);
		i++;
	}
	if (u_c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

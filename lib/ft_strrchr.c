/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:06:49 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:06:49 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	u_c;
	int				i;
	char			*last;

	i = 0;
	last = NULL;
	u_c = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == u_c)
			last = (char *)&s[i];
		i++;
	}
	if (u_c == '\0')
		return ((char *)&s[i]);
	if (last)
		return (last);
	return (NULL);
}

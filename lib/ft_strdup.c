/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:06:07 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:06:07 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	char	*spc;
	int		i;

	spc = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!spc)
		return (NULL);
	i = 0;
	while (src[i])
	{
		spc[i] = src[i];
		i++;
	}
	spc[i] = '\0';
	return ((char *)spc);
}

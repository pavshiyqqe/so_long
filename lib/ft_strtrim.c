/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:08:20 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:08:20 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s_len;
	int		i;
	int		j;
	int		k;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	s_len = ft_strlen(s1);
	i = 0;
	j = s_len - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	result = malloc((j - i + 2) * sizeof(char));
	if (!result)
		return (NULL);
	k = 0;
	while (i <= j)
		result[k++] = s1[i++];
	result[k] = '\0';
	return (result);
}

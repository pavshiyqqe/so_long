/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:08:24 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:08:24 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	str_len;
	size_t	actual_len;

	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if ((str_len - start) < len)
		actual_len = str_len - start;
	else
		actual_len = len;
	substring = malloc((actual_len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, &s[start], actual_len + 1);
	return (substring);
}

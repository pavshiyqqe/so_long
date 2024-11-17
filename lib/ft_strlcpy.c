/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:06:24 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:06:24 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (*src && i + 1 < size)
	{
		*dest++ = *src++;
		i++;
	}
	if (size > 0)
		*dest = '\0';
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}

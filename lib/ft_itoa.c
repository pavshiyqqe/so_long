/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:02:42 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:02:42 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_abs(int n)
{
	long	result;

	result = n;
	if (result < 0)
		return (result * -1);
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	long	n_abs;
	char	*result;

	if (!n)
		return (ft_strdup("0"));
	len = n < 0;
	n_abs = ft_abs(n);
	while (n_abs > 0)
		n_abs /= 10 + (0 * len++);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len--] = '\0';
	n_abs = ft_abs(n);
	while (n_abs > 0)
	{
		result[len--] = (n_abs % 10) + '0';
		n_abs /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

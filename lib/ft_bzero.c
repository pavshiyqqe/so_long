/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:02:00 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:02:00 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(char *ptr, int num)
{
	unsigned char	*result;
	int				i;

	result = (unsigned char *) ptr;
	i = 0;
	while (i < num)
	{
		result[i] = 0;
		i++;
	}
	return (ptr);
}

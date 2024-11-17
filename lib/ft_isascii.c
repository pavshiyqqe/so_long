/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyaniv <yyaniv@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:02:25 by yyaniv            #+#    #+#             */
/*   Updated: 2024/11/11 22:02:25 by yyaniv           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int num)
{
	return (num >= 0 && num <= 127);
}

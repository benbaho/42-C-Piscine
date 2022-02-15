/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 11:28:49 by bdurmus           #+#    #+#             */
/*   Updated: 2021/12/07 10:55:14 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0 ;
	b = 1 ;
	c = 0 ;
	while ((str[a] >= '\t' && str[a] <= '\r') || str[a] == ' ')
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			b *= -1 ;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = (str[a] - '0') + (c * 10);
		a++;
	}
	return (c * b);
}

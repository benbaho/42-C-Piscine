/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:28:03 by bdurmus           #+#    #+#             */
/*   Updated: 2021/12/11 19:27:26 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	a ;

	a = nb ;
	if (power == 0)
		return (1);
	while (power < 0)
	{
		return (0);
	}
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (a);
}

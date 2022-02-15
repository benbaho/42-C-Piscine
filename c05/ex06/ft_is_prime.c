/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:29:08 by bdurmus           #+#    #+#             */
/*   Updated: 2021/12/11 19:30:18 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	a;

	if (nb < 2)
	{
		return (0);
	}
	a = 2;
	while (a <= nb / 2)
	{
		if (nb % a == 0)
		{
			return (0);
		}
		a++;
	}
	return (1);
}

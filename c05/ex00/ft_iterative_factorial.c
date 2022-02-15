/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 11:46:27 by bdurmus           #+#    #+#             */
/*   Updated: 2021/12/11 19:24:26 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	a ;

	a = 1 ;
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (a);
}

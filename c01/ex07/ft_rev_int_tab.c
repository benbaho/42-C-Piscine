/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:41:30 by bdurmus           #+#    #+#             */
/*   Updated: 2021/11/30 19:18:36 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	k;
	int	m;

	m = 0;
	while (m < size / 2)
	{
		k = tab[m];
		tab[m] = tab[size - 1 - m];
		tab[size - 1 - m] = k;
		m++;
	}
}

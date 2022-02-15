/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:07:26 by bdurmus           #+#    #+#             */
/*   Updated: 2021/11/30 18:32:59 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c ;

	c = *a ;
	*a = *b ;
	*b = c ;
}

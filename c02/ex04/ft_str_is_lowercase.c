/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:06:39 by bdurmus           #+#    #+#             */
/*   Updated: 2021/12/04 11:27:13 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	a ;

	a = 0 ;
	while (str[a] != '\0')
	{
		if ((str[a] < 97) || (str[a] > 123))
			return (0);
		a++;
	}
	return (1);
}

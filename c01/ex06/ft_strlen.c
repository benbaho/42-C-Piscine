/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:17:40 by bdurmus           #+#    #+#             */
/*   Updated: 2021/11/30 19:04:26 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	a ;

	a = 0 ;
	while (str [a] != '\0')
		a++ ;
	return (a);
}

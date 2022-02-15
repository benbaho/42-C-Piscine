/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:07:49 by bdurmus           #+#    #+#             */
/*   Updated: 2021/12/04 11:18:30 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	a ;

	a = 0 ;
	while (str[a] != '\0')
	{
		if ((str[a] < 'A' ) || (str[a] > 'Z' && str[a] < 'a') || (str[a] > 'z'))
			return (0);
		a++ ;
	}
	return (1);
}
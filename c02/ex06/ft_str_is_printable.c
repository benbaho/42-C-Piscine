/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:48:42 by bdurmus           #+#    #+#             */
/*   Updated: 2021/12/04 11:29:24 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	b ;

	b = 0 ;
	while (str[b] != '\0')
	{
		if ((str[b] < 32) || (str[b] > 127))
			return (0);
		b++ ;
	}
	return (1);
}

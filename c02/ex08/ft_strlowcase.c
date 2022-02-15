/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:20:12 by bdurmus           #+#    #+#             */
/*   Updated: 2021/12/04 11:31:19 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	a ;

	a = 0 ;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A') && (str[a] <= 'Z'))
				str[a] += 'a' - 'A';
		a++ ;
	}
	return (str);
}
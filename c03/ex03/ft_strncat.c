/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 21:08:58 by bdurmus           #+#    #+#             */
/*   Updated: 2021/12/05 14:09:00 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char*src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	b = 0;
	while (dest[b] != '\0')
		b++;
	a = 0;
	while (a < nb && src[a] != '\0')
	{
		dest[b + a] = src[a];
		a++;
	}
	dest[b + a] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <bdurmus@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:30:53 by bdurmus           #+#    #+#             */
/*   Updated: 2021/12/12 01:00:27 by bdurmus           ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int	a ;

	a = 0;
	if (ac > 0)
	{
		while (av[0][a] != '\0')
		{
			write(1, &av[0][a], 1);
			a++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

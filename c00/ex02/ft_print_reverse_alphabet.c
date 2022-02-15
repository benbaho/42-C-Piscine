/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdurmus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:13:06 by bdurmus           #+#    #+#             */
/*   Updated: 2021/11/27 22:22:18 by bdurmus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{	
	char	mrb;

	mrb = 'z';
	while (mrb >= 'a')
	{
		ft_putchar(mrb);
		mrb--;
	}
}

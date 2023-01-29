/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:50:08 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/29 16:13:44 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr, const char *f_str, char bonus)
{
	char	*num;
	int		count;

	if (nbr > 0)
	{
		if (*(f_str - 1) == ' ')
			write(STDOUT_FILENO, " ", 1);
		else if (*(f_str - 1) == '+')
			write(STDOUT_FILENO, "+", 1);
	}
	num = ft_itoa_base(nbr, DECIMAL);
	count = ft_putstr(num);
	free(num);
	return (count);
}

int	ft_puthex(uintptr_t nbr, const char *f_str)
{
 	char	*num;
	int		count;

	if ( == '#')
	{
		if (*f_str == 'x' || *f_str == 'p')
			write(STDOUT_FILENO, "0x", 2);
		else if (*)
	}
}

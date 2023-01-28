/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:50:08 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/28 16:06:26 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	unsigned int	temp;
	char			buf;
	int				count;

	temp = nbr;
	count = 0;
	if (nbr < 0)
	{
		temp = (unsigned int)(-1 * nbr);
		write(STDOUT_FILENO, "-", 1);
		count ++;
	}
	if (temp > 9)
	{
		count += ft_putnbr(temp / 10);
		count += ft_putnbr(temp % 10);
	}
	else
	{
		buf = '0' + temp;
		write(STDOUT_FILENO, &buf, 1);
		count ++;
	}
	return (count);
}

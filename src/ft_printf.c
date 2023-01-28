/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:49:40 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/28 18:01:21 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_flag(const char *s, va_list args)
{
	int count;

	count = 0;
	if (*s)
	{
		if (*s == 'd')
			count += ft_putnbr(va_arg(args, int));
		else if (*s == 's')
			count += ft_putstr(va_arg(args, char *));
		else if (*s == 'c')
			count += ft_putchar(va_arg(args, int));
	}
	return (count);	
}

int ft_printf(const char *str, ...)
{
	va_list args;
	int	count;
	char *s;
	
	va_start(args, str);
	if (!str)
		return (0);
	count = 0;
	s = (char *)str;
	while (*s)
	{
		if (*s == '%')
		{
			s ++;
			while (*s && !ft_strchr(FORMAT_FLAGS, *s) && !ft_strchr(ESCAPE_SEQ, *s))
				s ++;
			if (ft_strchr(FORMAT_FLAGS, *s))
				count += check_flag(s, args);
			else if (ft_strchr(ESCAPE_SEQ, *s))
			{
				write(STDOUT_FILENO, s++, 1);
				count ++;
			}
		}
		else
		{
			write(STDOUT_FILENO, s, 1);
			s++;
			count++;
		}
	}
	va_end(args);
	return (count);
}

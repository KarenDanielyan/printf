/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:49:40 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/29 18:08:22 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_flag(const char *s, va_list args, char bonus)
{
	int	count;

	count = 0;
	if (*s == 'd' || *s == 'i')
		count += ft_putnbr(va_arg(args, int), bonus);
	else if (*s == 'u')
		count += ft_putnbr(va_arg(args, unsigned int), 0);
	else if (*s == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (*s == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (*s == 'p')
	{
		write(STDOUT_FILENO, "0x", 2);
		count += ft_putptr(va_arg(args, uintptr_t), L_HEX);
	}
	else if (*s == 'x' || *s == 'X')
		count += ft_puthex(va_arg(args, unsigned int), s, bonus);
	else if (*s == '%')
	{
		count += 1;
		write(STDOUT_FILENO, "%", 1);
	}
	return (count);
}

static char	*on_format(char *s, va_list args, int *count)
{
	char	bonus;

	bonus = 0;
	if (*s == '%')
	{
		s ++;
		while (*s && !ft_strchr(FORMAT_FLAGS, *s)
			&& !ft_strchr(ESCAPE_SEQ, *s) && !ft_strchr(BONUS, *s))
			s ++;
		if (ft_strchr(FORMAT_FLAGS, *s))
			*count += check_flag(s, args, bonus);
		else if (ft_strchr(ESCAPE_SEQ, *s))
		{
			write(STDOUT_FILENO, s, 1);
			(*count)++;
		}
		else if (ft_strchr(BONUS, *s))
			bonus = *s;
		s ++;
	}
	return (s);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	char	*s;

	va_start(args, str);
	if (!str)
		return (0);
	count = 0;
	s = (char *)str;
	while (*s)
	{
		s = on_format(s, args, &count);
		if (*s)
		{
			write(STDOUT_FILENO, s, 1);
			s ++;
			count ++;
		}
	}
	va_end(args);
	return (count);
}

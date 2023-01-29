/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:22:37 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/29 15:25:49 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_abs(int n)
{
	if (n < 0)
		return ((unsigned int)(-1 * n));
	return ((unsigned int)n);
}

static int	count_digits(unsigned int digits, const char *base)
{
	int	i;
	unsigned int	base_len;

	i = 1;
	base_len = (int )(ft_strlen(base) - 1);
	while (digits > base_len)
	{
		i ++;
		digits /= base_len;
	}
	return (i);
}

static void	ft_strrev(char *a)
{
	char	*l;
	char	*r;
	char	temp;

	l = a;
	r = a + ft_strlen(a) - 1;
	while (l < r)
	{
		temp = *l;
		*l = *r;
		*r = temp;
		l ++;
		r --;
	}
}

static char	*fill_out(unsigned int digits, int size, int sign, const char *base)
{
	char	*a;
	char	*i;
	int		base_len;

	base_len = ft_strlen(base);
	a = malloc ((size + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	i = a;
	while (size > sign)
	{
		*i = *(base + (digits % base_len));
		digits /= base_len;
		i ++;
		size --;
	}
	if (sign == 1)
	{
		*i = '-';
		i ++;
	}
	*i = '\0';
	return (a);
}

char	*ft_itoa_base(int n, const char *base)
{
	int				size;
	int				sign;
	unsigned int	digits;
	char			*a;

	sign = (int)(n < 0);
	digits = ft_abs(n);
	size = count_digits(digits, base) + sign;
	a = fill_out(digits, size, sign, base);
	ft_strrev(a);
	return (a);
}

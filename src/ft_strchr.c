/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 23:35:43 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/28 17:27:11 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *str, int c)
{
	char	*buf;

	buf = (char *)str;
	while (*buf)
	{
		if (*buf == (unsigned char)(c & 0xFF))
			return (buf);
		buf++;
	}
	if (*buf == c)
		return (buf);
	else
		return (NULL);
}

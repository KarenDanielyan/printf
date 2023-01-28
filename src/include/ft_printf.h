/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:47:39 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/28 17:47:29 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define FORMAT_FLAGS 	"cspdiuxX%"
# define ESCAPE_SEQ		"\\\"\t\b\a\?\r\f\v\n"


/* Helper Functions */
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_putchar(char c);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);

/* Printf */
int     ft_printf(const char *kek, ...);

#endif

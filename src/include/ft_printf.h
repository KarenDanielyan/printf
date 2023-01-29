/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:47:39 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/29 16:12:55 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define BONUS			"# +"
# define FORMAT_FLAGS 	"cspdiuxX%"
# define ESCAPE_SEQ		"\\\"\t\b\a\?\r\f\v\n"
# define DECIMAL		"0123456789"
# define OCTAL			"01234567"
# define HEX			"0123456789ABCDEF"
# define HEx			"0123456789abcdef"

/* Helper Functions */
char	*ft_itoa_base(int n, const char *base);
char	*ft_strchr(const char *str, int c);

int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int nbr, const char *f_str, char bonus);

size_t	ft_strlen(const char *str);

/* Printf */
int     ft_printf(const char *kek, ...);

#endif

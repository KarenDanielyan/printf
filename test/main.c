/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:04:42 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/29 18:09:34 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

/*static void helper(const char *s, ...)
{
    va_list args;

    va_start(args, s);
    printf(s, args);
    fflush(NULL);
    printf("\n");
    ft_printf(s, args);
}*/

int main(void)
{
    int n = 214;
    printf("PTR:zzzzzzzzzzzzzzzzzzzz %zzzzzzzz\tzzzp\n", (void *)&n);
    ft_printf("PTR:zzzzzzzzzzzzzzzzzzzz %zzzzzzzz\tzzzp\n", (void *)&n);
    return (0);
}
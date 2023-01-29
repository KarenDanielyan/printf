/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaniely <kdaniely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:04:42 by kdaniely          #+#    #+#             */
/*   Updated: 2023/01/29 16:14:11 by kdaniely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void helper(const char *s)
{
    printf(s);
    fflush(NULL);
    printf("\n");
    ft_printf(s);
}

int main(void)
{
    helper("Backslash %\\42");
    printf("")
    return (0);
}
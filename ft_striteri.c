/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:10:51 by fbarrada          #+#    #+#             */
/*   Updated: 2026/04/29 14:23:02 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void    zzero(unsigned int i, char *str)
// {
//         i = 0;
//         while (str[i])
//         {
//                 str[i] = '0';
//                 i++;
//         }
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int     main()
// {
//         char    str[] = "Felyppe";

//         ft_striteri(str, zzero);
//         printf("%s", str);
//         return (0);
// }
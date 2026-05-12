/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:52:14 by fbarrada          #+#    #+#             */
/*   Updated: 2026/05/07 15:52:59 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (j >= size)
		return (size + ft_strlen(src));
	while (j + i < size - 1 && src[i])
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + ft_strlen(src));
}

// int     main()
// {
// 	char	dest[50] = "a";
//      printf("%ld\n", ft_strlcat("pqrstuvwxyz", "abcd", 0));
// 	write(1, "\n", 1);
//     	write(1, dest, 15);
//      return (0);
// }
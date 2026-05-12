/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:41:00 by fbarrada          #+#    #+#             */
/*   Updated: 2026/05/07 15:54:34 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*type1;
	unsigned char	*type2;
	size_t			i;

	type1 = (unsigned char *)s1;
	type2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (type1[i] != type2[i])
			return (type1[i] - type2[i]);
		i++;
	}
	return (0);
}

// int     main()
// {
//         const char      s1[] = "Felyppe";
//         const char      s2[] = "Felppe";
//         printf((ft_memcmp(s1, s2, 3)) ? "Different." : "Equal.");
// }
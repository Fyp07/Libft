/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:28:04 by fbarrada          #+#    #+#             */
/*   Updated: 2026/05/07 15:52:27 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptrsrc;
	unsigned char		*ptrdest;
	size_t				i;

	i = 0;
	if ((dest == NULL) && (src == NULL))
		return (NULL);
	ptrsrc = (const unsigned char *)src;
	ptrdest = (unsigned char *)dest;
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dest);
}

// int     main()
// {
//         char    dest[50];
//         const   char src[50] = "Felyppe";
//         size_t  n = 5;

//         printf("%s\n", dest);
//         ft_memcpy(dest, src, n);
//         printf("%s\n", dest);
//         return (0);
// }

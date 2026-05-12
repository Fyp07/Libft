/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:57:21 by fbarrada          #+#    #+#             */
/*   Updated: 2026/05/05 17:28:23 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*cal;
	size_t	total;

	if (!size || !nmemb)
		return (malloc(1));
	if (size != 0 && nmemb > (size_t) - 1 / size)
		return (NULL);
	total = nmemb * size;
	cal = malloc(total);
	if (!cal)
		return (NULL);
	ft_bzero(cal, total);
	return (cal);
}

// int     main()
// {
//         void    *d;

//         d = ft_calloc(5, sizeof(float));
//         printf("%s", (char *)d);
//         return (0);
// }
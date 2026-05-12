/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:29:42 by fbarrada          #+#    #+#             */
/*   Updated: 2026/04/28 15:17:33 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;

	newstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s, (ft_strlen(s) + 1));
	return (newstr);
}

// int     main()
// {
//         const char      str[] = "Felyppe";
//         char    *dest;

//         dest = ft_strdup(str);
//         printf("%s", dest);
//         return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:48:37 by fbarrada          #+#    #+#             */
/*   Updated: 2026/04/29 14:23:31 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char    zzero(unsigned int i, char c)
// {
//         (void)i;
//         c = '0';
//         return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	char			*str;
	unsigned int	i;

	size = ft_strlen(s);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int     main()
// {
//         printf("%s", ft_strmapi("Felyppe", zzero));
//         return (0);
// }
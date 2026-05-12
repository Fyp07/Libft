/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:46:12 by fbarrada          #+#    #+#             */
/*   Updated: 2026/05/07 17:10:15 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*atual;
	int		i;

	atual = lst;
	i = 0;
	while (atual != NULL)
	{
		i++;
		atual = atual->next;
	}
	return (i);
}

// int     main()
// {
//         t_list  *a = malloc(sizeof(t_list));
//         t_list  *b = malloc(sizeof(t_list));
//         t_list  *c = malloc(sizeof(t_list));

//         a->next = b;
//         b->next = c;
//         c->next = NULL;

//         printf("%d", ft_lstsize(a));
//         free(a);
//         free(b);
//         free(c);
//         return (0);
// }
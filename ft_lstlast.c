/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:11:56 by fbarrada          #+#    #+#             */
/*   Updated: 2026/05/12 20:26:26 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;
	t_list	*current;

	if (!lst)
		return (NULL);
	current = lst;
	while (current != NULL)
	{
		last = current;
		current = current->next;
	}
	return (last);
}

// int     main()
// {
//         t_list  *a = malloc(sizeof(t_list));
//         t_list  *b = malloc(sizeof(t_list));
//         t_list  *c = malloc(sizeof(t_list));
//         t_list  *d = malloc(sizeof(t_list));

//         a->next = b;
//         a->content = "Felyppe";
//         b->next = c;
//         b->content = "Augusto";
//         c->next = d;
//         c->content = "Barradas";
//         d->next = NULL;

//         printf("%s", (char      *)ft_lstlast(a)->content);
//         free(a);
//         free(b);
//         free(c);
//         return (0);
// }
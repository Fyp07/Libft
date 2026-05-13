/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:28:40 by fbarrada          #+#    #+#             */
/*   Updated: 2026/05/12 20:27:10 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		current = ft_lstlast(*lst);
		current->next = new;
	}
}

// int     main()
// {

//         t_list  *a = malloc(sizeof(t_list));
//         t_list  *b = malloc(sizeof(t_list));
//         t_list  *c = malloc(sizeof(t_list));
//         t_list  *d = malloc(sizeof(t_list));

//         a->content = "Felyppe";
//         b->content = "Neuza";
//         c->content = "Gabriel";
//         d->content = "Hermano";

//         ft_lstadd_back(&a, b);
//         ft_lstadd_back(&a, c);
//         ft_lstadd_back(&a, d);

//         print_list(a);

//         free(a);
//         free(b);
//         free(c);
//         return (0);
// }
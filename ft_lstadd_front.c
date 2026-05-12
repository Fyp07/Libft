/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:56:07 by fbarrada          #+#    #+#             */
/*   Updated: 2026/05/12 15:35:07 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *lst = NULL;

//     t_list *a = malloc(sizeof(t_list));
//     t_list *b = malloc(sizeof(t_list));
//     t_list *c = malloc(sizeof(t_list));

//     a->content = "A";
//     a->next = NULL;
//     b->content = "B";
//     b->next = NULL;
//     c->content = "C";
//     c->next = NULL;

//     ft_lstadd_front(&lst, a);
//     ft_lstadd_front(&lst, b);
//     ft_lstadd_front(&lst, c);

//     printlist(lst);
//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:27:19 by fbarrada          #+#    #+#             */
/*   Updated: 2026/05/13 13:40:50 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

// int     main()
// {
//         t_list *neuza;
//         t_list *felyppe;

//         neuza = ft_lstnew((void *)"Neuza");
//         felyppe = ft_lstnew((void *)"Felyppe");

//         neuza->next = felyppe;

//         printf("%s", (char *)neuza->next->content);
//         free(neuza);
//         free(felyppe);
//         return (0);
// }
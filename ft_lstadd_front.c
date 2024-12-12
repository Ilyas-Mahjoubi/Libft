/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilmahjou <ilmahjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:32:00 by ilmahjou          #+#    #+#             */
/*   Updated: 2024/11/28 18:13:42 by ilmahjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}
/* #include <stdio.h>
int main(void)
{
		t_list *head = NULL;
		t_list *new_node1 = ft_lstnew("Node 1");
		t_list *new_node2 = ft_lstnew("Node 2");

		if (!new_node1 || !new_node2)
		{
			printf("Failed to allocate memory for nodes.\n");
			return (1);
		}

		printf("Adding Node 1 to the front of the list...\n");
		ft_lstadd_front(&head, new_node1);
		printf("Head content: %s\n", (char *)head->content);

		printf("Adding Node 2 to the front of the list...\n");
		ft_lstadd_front(&head, new_node2);
		printf("Head content: %s\n", (char *)head->content);
		printf("Next node content: %s\n", (char *)head->next->content);
		free(new_node1);
		free(new_node2);

		return 0;
} */

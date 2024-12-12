/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilmahjou <ilmahjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:55:37 by ilmahjou          #+#    #+#             */
/*   Updated: 2024/11/28 18:50:27 by ilmahjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
/* #include <stdio.h>
void del(void *content)
{
	free(content);
}
int main(void)
{
	t_list *head = ft_lstnew(strdup(" World"));
	t_list *newnode = ft_lstnew(strdup("Hello"));
	t_list *last = ft_lstnew(strdup(" Fuck you!"));

	ft_lstadd_front(&head, newnode);
	ft_lstadd_back(&head, last);

	t_list *temp = head;
	while (temp)
	{
		printf("%s", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");


	ft_lstclear(&head, del);


	if (head == NULL)
		printf("List cleared successfully.\n");
	else
		printf("List not cleared.\n");

	return 0;
} */

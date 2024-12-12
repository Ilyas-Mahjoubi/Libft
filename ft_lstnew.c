/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilmahjou <ilmahjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:13:19 by ilmahjou          #+#    #+#             */
/*   Updated: 2024/11/26 00:28:27 by ilmahjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem -> content = content;
	elem -> next = NULL;
	return (elem);
}
/* #include <stdio.h>
int main(void)
{
		char *content = "Hello, world!";
		t_list *new_node = ft_lstnew(content);
		if (new_node)
		{
			printf("Content: %s\n", (char *)new_node->content);
			printf("Next: %p\n", new_node->next);
		}
		else
		{
			printf("Failed to allocate memory for new node.\n");
		}
		free(new_node);
		return 0;
} */

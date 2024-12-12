/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilmahjou <ilmahjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:55:21 by ilmahjou          #+#    #+#             */
/*   Updated: 2024/11/28 19:42:10 by ilmahjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/* void del(void *content)
{
	free(content);
}
int main()
{
    t_list *node = malloc(sizeof(t_list));
    node->content = ft_strdup("Hello, world!");
    if (!node->content)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Content before deletion: %s\n", (char *)node->content);

    ft_lstdelone(node, del);
    printf("Node deleted.\n");
    return 0;
} */

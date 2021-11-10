/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidia <bnidia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:43:19 by bnidia            #+#    #+#             */
/*   Updated: 2021/10/25 19:44:44 by bnidia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstclear
** Deletes and frees the given element and every successor of that element,
** using the function ’del’ and free(3). Finally, the pointer to the list
** must be set to NULL
** 
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*present_elem;
	t_list	*next_elem;

	present_elem = *lst;
	while (present_elem != NULL)
	{
		next_elem = present_elem->next;
		ft_lstdelone(present_elem, del);
		present_elem = next_elem;
	}
	*lst = NULL;
}

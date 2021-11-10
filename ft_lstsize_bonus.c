/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidia <bnidia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:54:41 by bnidia            #+#    #+#             */
/*   Updated: 2021/10/29 02:36:07 by bnidia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_lstsize
** Counts the number of elements in a list
** Return Value
** Length of the list
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list			*lst_temp;

	i = 0;
	lst_temp = lst;
	while (lst_temp)
	{
		lst_temp = lst_temp->next;
		i++;
	}
	return (i);
}

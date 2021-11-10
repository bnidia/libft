/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnidia <bnidia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 13:57:19 by bnidia            #+#    #+#             */
/*   Updated: 2021/10/26 17:54:52 by bnidia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_itoa
** Allocates (with malloc(3)) and returns a string representing the integer
** received as an argument. Negative numbers must be handled.
** Return Value
** The string representing the integer. NULL if the allocation fails.
** Comment
** max int 2,147,483,647 - 10b + '-' + '/0' = 12b
*/

#include "libft.h"

static int	ft_lenint(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		lenint;

	num = (long)n;
	lenint = ft_lenint(n);
	str = (char *)malloc(lenint + 1);
	if (!str)
		return (NULL);
	if (num < 0)
		num = -num;
	str[lenint] = '\0';
	while (lenint--)
	{
		str[lenint] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

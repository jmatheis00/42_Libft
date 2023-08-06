/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:40:57 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:08:24 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns length of 'lst'
int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		lst = lst-> next;
		counter++;
	}
	return (counter);
}

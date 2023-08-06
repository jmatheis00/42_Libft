/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:00:26 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:06:56 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// adding node 'new' to beginning of list lst
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL && lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

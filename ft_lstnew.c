/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:01:53 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:36:43 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns new node created with 'content'
t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp->content = content;
	temp->next = NULL;
	return (temp);
}

/*
int main (void)
{
	t_list *list;

	list = NULL;

	list = add_link("aaaa\n");
	list = add_link("bbbb\n");
	list = add_link("cccc\n");

	print_list(list);
	return (0);
}
*/
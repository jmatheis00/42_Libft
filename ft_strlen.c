/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:16:30 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:18:57 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	char	ex1[] = "hello";
	char	ex2[] = "hi ";

	printf("\n\nSTRLEN");
	printf("\nstringlength_ex1: %lu", strlen (ex1));
	printf("\nstringlength_ex2: %lu", strlen (ex2));
	printf("\nREDONEFUNCTIONS");
	printf("\nstringlength_ex1: %d", ft_strlen (ex1));
	printf("\nstringlength_ex2: %d", ft_strlen (ex2));
}
*/
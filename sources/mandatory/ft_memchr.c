/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:13:59 by jmatheis          #+#    #+#             */
/*   Updated: 2023/09/04 17:50:44 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
locates the first occurence of 'c' in 's'
return string from 'c' to end of string
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*test;

	test = (char *)s;
	i = 0;
	while (i < n)
	{
		if (test[i] == (char)c)
			return (test + i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	ex1[] = "hello";
	char	ex2[] = "world";
	int	c;
	size_t	n;

	c = 'l';
	n = '3';
	printf("\nSTRRCHR");
	printf("\nmemchr_ex1: %s", memchr (ex1, c, n));
	printf("\nmemchr_ex2: %s", memchr(ex2, c, n));
	printf("\nft_memchr_ex1: %s", (char *) ft_memchr(ex1, c, n));
	printf("\nft_memchr_ex2: %s\n", (char *) ft_memchr(ex2, c, n));
}
*/
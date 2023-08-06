/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:32:48 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:23:30 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//searching for last occurence of 'c' in 's'
//if 'c' is found, returns 's' from 'c' until end
char	*ft_strrchr(const char *s, int c)
{
	int		length;
	char	c2;

	length = ft_strlen(s);
	c2 = (char)c;
	while (length >= 0)
	{
		if (s[length] == c2)
			return ((char *)s + (length));
		length--;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	ex2[] = "bonjour";
	char	ex3[] = "bonjourno";
	char	*z;
	char	*y;
	char	*x;
	char	*w;
	int	c;

	c = 'b';
	z = ft_strrchr(ex2, c);
	printf("\nstrrchr_ex1: %s", strrchr (ex2, c));
	printf("\nft_strrchr_ex1: %s", z);
	c = 'o';
	y = ft_strrchr(ex2, c);
	printf("\n\nSTRRCHR");
	printf("\nstrrchr_ex2: %s", strrchr (ex2, c));
	printf("\nft_strrchr_ex2: %s\n", y);
	x = ft_strrchr(ex3, c);
	printf("\n\nSTRRCHR");
	printf("\nstrrchr_ex2: %s", strrchr (ex3, c));
	printf("\nft_strrchr_ex2: %s\n", x);
	c = 'j';
	w = ft_strrchr(ex2, c);
	printf("\n\nSTRRCHR");
	printf("\nstrrchr_ex2: %s", strrchr (ex2, c));
	printf("\nft_strrchr_ex2: %s\n", y);
}
*/
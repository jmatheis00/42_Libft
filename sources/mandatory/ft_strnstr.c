/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:09:41 by jmatheis          #+#    #+#             */
/*   Updated: 2023/09/04 17:51:16 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

// find 'needle' in 'haystack' until size 'len'
// if found, returns 'haystack' from 'needle' until end
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*test1;
	char	*test2;
	size_t	i;
	size_t	j;

	test1 = (char *) haystack;
	test2 = (char *) needle;
	i = 0;
	j = 0;
	if (!ft_strlen(needle))
		return (test1);
	while (test1[i] != '\0' && i < len)
	{
		while (test1[i + j] == test2[j] && i + j < len)
		{
			j++;
			if (test2[j] == '\0')
				return (test1 + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	ex1[] = "aaabcd ipsum dolor sit amet";
	char	ex2[] = "aabc";
	size_t	len;
	char	*z;

	len = 10;
	z = ft_strnstr(ex1, ex2, len);
	printf("\nSTRNSTR");
	printf("\nstrnstr: %s", strnstr (ex1, ex2, len));
	printf("\nft_strnstr: %s\n", z);
}
*/

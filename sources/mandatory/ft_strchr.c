/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 16:00:13 by jmatheis          #+#    #+#             */
/*   Updated: 2023/09/04 17:51:16 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

// searching for 'c' in 's'
// returns 's' from 'c' to end
// can find null termination
char	*ft_strchr(const	char *s, int c)
{
	int		length;
	char	c2;

	length = 0;
	c2 = (char)c;
	while (s[length] != c2)
	{
		if (s[length] == '\0')
			return (0);
		length++;
	}
	return ((char *)s + length);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	ex1[] = "";
	char	ex2[] = "bonjour";
	char	*z;
	char	*y;
	int	c;

	c = '\0';
	z = ft_strchr(ex1, c);
	y = ft_strchr(ex2, c);
	printf("\n\nSTRCHR");
	printf("\nstrchr_ex1: %s", strchr (ex1, c));
	printf("\nstrchr_ex2: %s", strchr (ex2, c));
	printf("\nft_strchr_ex1: %s", z);
	printf("\nft_strchr_ex2: %s\n", y);
}
*/
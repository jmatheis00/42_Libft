/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:07:52 by jmatheis          #+#    #+#             */
/*   Updated: 2023/09/04 17:51:16 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

// writes 'len' bytes of value 'c' to 'b'
void	*ft_memset(void *b, int c, size_t len)
{
	char	*test;
	size_t	counter;

	test = (char *)b;
	counter = 0;
	while (counter < len)
	{
		test[counter] = c;
		counter++;
	}
	return (test);
}

/*
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	ex3[] = "hello";
	size_t	len;
	int	c;

	c = 'a';
	len = 2;
	printf("stringlcpy_ex3_ex4 %s", ft_memset(ex3, c, len));
	printf("\nstringlcpy_ex3_ex4 %s\n", memset(ex3, c, len));
	return (0);
}
*/
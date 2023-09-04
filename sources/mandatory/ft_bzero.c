/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:23:05 by jmatheis          #+#    #+#             */
/*   Updated: 2023/09/04 17:50:22 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_bzero(void *b, size_t n)
{
	char	*test;
	size_t	counter;

	test = (char *)b;
	counter = 0;
	while (counter < n)
	{
		test[counter] = 0;
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
	size_t	len = 5;
	printf("\nft_bzero %s", ft_bzero(ex3, len));
	printf("\nbzero %s", bzero(ex3, len));
	return (0);
}
*/
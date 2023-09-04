/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:04:28 by jmatheis          #+#    #+#             */
/*   Updated: 2023/09/04 17:50:51 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
copies 'n' bytes from memory area 'src' to memory area 'dst'
/save to use when overlapping, memcpy doesn't use a buffer
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst2;
	const char	*src2;
	size_t		i;

	dst2 = (char *)dst;
	src2 = (char *)src;
	i = 0;
	if (dst2 == NULL && src2 == NULL)
		return (NULL);
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst2);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	ex1[] = "hello world";
	char	ex2[] = "bonjour";
	void	*z;
	size_t	n;

	n = 8;
	printf("\nmemcpy_ex1_ex2 %s", memcpy(ex2, ex1, n));
	z = ft_memcpy(ex2, ex1, n);
	printf("\nft_memcpy_ex1_ex2 %s", z);
	return (0);
}
*/
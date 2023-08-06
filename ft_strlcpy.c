/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 14:56:37 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:53:39 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copies 'src' to 'dst' up to a maximum of dstsize
// returns length of 'src'
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	length;

	counter = 0;
	length = ft_strlen(src);
	if (!src || !dst)
		return (0);
	if (!dstsize)
		return (length);
	while (counter < dstsize && src[counter] != '\0')
	{
		dst[counter] = src[counter];
		counter++;
	}
	if (dstsize <= length)
		dst[dstsize -1] = '\0';
	else if (dstsize != 0)
		dst[counter] = '\0';
	return (length);
}

/*
int	main(void)
{
	char	src[] = "12345";
	char	dst[] = "00000";

	printf("source: %s\n", src);
	ft_strlcpy(dst, src, 4);
	printf("ft_strlcpy: %s\n", dst);
	strlcpy(dst, src, 4);
	printf("   strlcpy: %s\n", dst);
	printf("   strlcpy: %zu\n", strlcpy(dst, src, 4));
	printf("   ft_strlcpy: %zu\n", ft_strlcpy(dst, src, 4));
}
*/
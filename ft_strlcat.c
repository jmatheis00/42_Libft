/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:17:47 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:51:04 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// concatenates 'src' to the end of 'dst',
// not longer than 'dstsize' (including \0)
// returns length of final string with no size restrictions
// stops appending chars from 'src' when 'dst' buffer
// reaches dstsize
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	counter2;
	size_t	length_src;
	size_t	length_dst;

	length_src = ft_strlen(src);
	length_dst = ft_strlen(dst);
	counter = 0;
	counter2 = length_dst;
	if (!dstsize)
		return (length_src);
	while (counter < length_src && counter2 < dstsize - 1)
	{
		dst[counter2] = src[counter];
		counter++;
		counter2++;
	}
	if (dstsize > length_dst)
	{
		dst[counter2] = '\0';
		return (length_src + length_dst);
	}
	return (length_src + dstsize);
}

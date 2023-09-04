/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:03:10 by jmatheis          #+#    #+#             */
/*   Updated: 2023/09/04 17:50:32 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("\n\nISASCII");
	c = 'A';
	printf("\nisascii: %d", isascii (c));
	c = '&';
	printf("\nisascii: %d", isascii (c));
	printf("\nREDONEFUNCTIONS");
	c = 'A';
	printf("\nisascii: %d", ft_isascii (c));
	c = '&';
	printf("\nisascii: %d", ft_isascii (c));
}
*/
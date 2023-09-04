/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:57:19 by jmatheis          #+#    #+#             */
/*   Updated: 2023/09/04 17:50:27 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("\n\nISALNUM");
	c = 'A';
	printf("\nisalnum: %d", isalnum (c));
	c = '8';
	printf("\nisalnum: %d", isalnum (c));
	c = '&';
	printf("\nnonalnum: %d", isalnum (c));
	printf("\nREDONEFUNCTIONS");
	c = 'A';
	printf("\nisalnum: %d", ft_isalnum (c));
	c = '8';
	printf("\nisalnum: %d", ft_isalnum (c));
	c = '&';
	printf("\nnonalnum: %d", ft_isalnum (c));
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:30:07 by jmatheis          #+#    #+#             */
/*   Updated: 2023/09/04 17:51:16 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

// duplicates 's1' in a new memory block & returns it
char	*ft_strdup(const char *s1)
{
	char	*s2;
	char	*test;
	size_t	len;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len);
	if (s2 == NULL)
		return (NULL);
	test = (char *)ft_memcpy(s2, s1, len);
	return (test);
}

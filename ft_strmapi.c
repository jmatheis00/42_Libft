/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:51:40 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:56:16 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// applies function 'f' to each character of 's'
// with an additional parameter representing the index
// of the character in the string
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*substr;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	substr = (char *)malloc(sizeof (char) * ft_strlen (s) + 1);
	if (substr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		substr[i] = f(i, s[i]);
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

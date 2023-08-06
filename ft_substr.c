/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:44:51 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:26:37 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// create substring of 's' from 'start' with size of 'len'
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && start < s_len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
int main(void)
{
    char test[] = "lorem ipsum dolor sit amet";
    char test2[] = "lorem ipsum dolor sit amet";
    char *z;
    unsigned int    start;
    size_t  len;

    start = 400;
    len = 20;
    z = ft_substr(test, start, len);
    printf("test5: %s\n", z);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:49:27 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:15:11 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// writes 'c' to file descriptor 'fd'
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

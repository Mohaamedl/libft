/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddadi <mhaddadi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:54:34 by mhaddadi          #+#    #+#             */
/*   Updated: 2025/04/26 16:56:11 by mhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	if (n == 0)
		return (0);
	len = 0;
	while (src[len])
	{
		len++;
	}
	i = 0;
	while (i < n && src[len + i])
	{
		dest[len + i] = src[i];
	}
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char dest[6] = "batata";
    char src[6] = "banana";
    ft_strlcat(dest,src, 12);
    printf("adding batata to banana, got : %s", dest);
}
*/

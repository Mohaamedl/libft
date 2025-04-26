/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddadi <mhaddadi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:53:20 by mhaddadi          #+#    #+#             */
/*   Updated: 2025/04/26 16:54:04 by mhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = malloc(n * size);
	if (!temp)
		return (NULL);
	while (i < n * size)
		temp[i++] = 0;
	return (temp);
}

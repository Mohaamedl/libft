/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddadi <mhaddadi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:13:30 by mhaddadi          #+#    #+#             */
/*   Updated: 2025/04/26 16:18:15 by mhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in_set(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	i = 0;
	start = 0;
	len = ft_strlen(s1);
	end = len;
	while (s1[i])
	{
		if (ft_in_set(s1[i], set))
			start++;
		if (ft_in_set(s1[len - i - 1], set))
			end--;
		i++;
	}
	str = ft_substr(s1, start, end - start);
	return (str);
}

static int	ft_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
        char *s1 = "24242242424batata42424242";
        char *set = "23";
        char *result = ft_strtrim(s1,set);
        printf("resut: %s", result);
}*/

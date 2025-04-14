/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddadi <mhaddadi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:48:53 by mhaddadi          #+#    #+#             */
/*   Updated: 2025/04/14 17:56:19 by mhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	result;
	int	signal;

	signal = 1;
	if(*nptr == ' ' || *nptr == '-'  || *nptr == '+')
	{
		if (*nptr == '-')
		{
			signal = -1;
		}
		nptr++;

	}
	result = 0;
	while (*nptr)
	{
		result = result * 10 + *nptr - '0';  
		nptr++;
	}

	return (result * signal);

}

#include <stdio.h>

int main(void)
{
	printf("%d",ft_atoi("-42323"));
}

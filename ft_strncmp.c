/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddadi <mhaddadi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:36:07 by mhaddadi          #+#    #+#             */
/*   Updated: 2025/04/22 16:36:22 by mhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
  unsigned int i;

  i = 0;
  while (i < n) {
    if ((unsigned char)s1[i] != (unsigned char)s2[i] || (unsigned char)s1[i] ||
        (unsigned char)s2[i])
      return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    i++;
  }
  return (0);
}

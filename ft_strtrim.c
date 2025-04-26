/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:19:12 by mhaddadi          #+#    #+#             */
/*   Updated: 2025/04/21 18:58:18 by mhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_in_set(char c, char const *set);

char *ft_substr(const char *s, unsigned int start, size_t len) {
  size_t i;
  char *substr;

  if (!s)
    return (NULL);
  if (start > ft_strlen(s))
    return (ft_strdup(""));
  if (len > ft_strlen(s + start))
    len = ft_strlen(s + start);
  substr = ft_calloc(len + 1, sizeof(char));
  if (!substr)
    return (NULL);
  i = 0;
  while (len > i) {
    substr[i] = s[start + i];
    i++;
  }
  return (substr);
}

char *ft_strtrim(char const *s1, char const *set) {
  size_t i;
  size_t start;
  size_t end;
  size_t len;
  char *str;

  i = 0;
  start = 0;
  len = ft_strlen(s1);
  end = len;
  while (s1[i]) {
    if (ft_in_set(s1[i], set))
      start++;
    if (ft_in_set(s1[len - i - 1], set))
      end--;
    i++;
  }
  str = ft_substr(s1, start, end - start);
  return (str);
}

int ft_in_set(char c, char const *set) {
  size_t i;

  i = 0;
  while (set[i]) {
    if (set[i] == c)
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

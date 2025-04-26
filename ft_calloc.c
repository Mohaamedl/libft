#include "libft.h"

void *ft_calloc(size_t n, size_t size) {
  unsigned char *temp;
  size_t i;

  i = 0;
  temp = malloc(n * size);
  if (!temp)
    return (NULL);
  while (i < n * size)
    temp[i++] = 0;
  return (temp);
}

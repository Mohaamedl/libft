#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
  unsigned char *dest_c;
  unsigned char *src_c;
  size_t i;

  if (dest == (void *)0 && src == (void *)0)
    return (NULL);
  dest_c = (unsigned char *)dest;
  src_c = (unsigned char *)src;
  i = 0;
  if (dest_c > src_c) {
    while (n-- > 0) {
      dest_c[n] = src_c[n];
    }
  } else {
    while (i < ft_strlen(src))
      dest_c[i] = src_c[i];
    i++;
  }
  return (dest);
}

#include <stdio.h>
#include <string.h>
int main(void) {
  char src[6] = "batata";
  char dest[6] = "yooooo";
  ft_memmove(dest, src, 6);

  printf("This is the result: %s", dest);
}

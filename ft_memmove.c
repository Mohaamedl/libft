
#include <stddef.h>

void *ft_memmove(void *dest, const char *src, size_t n) {
  unsigned char *dest_c;
  unsigned char *src_c;

  if (dest == (void *)0 && src == (void *)0)
    return (0);

  dest_c = (unsigned char *)dest;

  src_c = (unsigned char *)src;

  while (n-- > 0) {
    *(dest_c++) = *(src++);
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

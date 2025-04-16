#include <stddef.h>
#include <string.h>

size_t strlcat(char *dest, const char *src, size_t n) {
  sizt_t i;
  size_t len;

  if (n == 0)
    return (0);
  len = 0;
  while (src[len]) {
    len++;
  }
  i = 0;
  while (i < n && src[len + i]) {
    dest[len + i] = src[i];
  }
  return (i);
}

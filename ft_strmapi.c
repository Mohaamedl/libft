#include "libft.h"

size_t ft_strlen(const char *s) {
  size_t i = 0;
  while (s[i])
    i++;
  return i;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
  unsigned int i;
  char *res;

  if (!s || !f)
    return NULL;
  res = malloc((ft_strlen(s) + 1) * sizeof(char));
  if (!res)
    return NULL;
  i = 0;
  while (s[i]) {
    res[i] = f(i, s[i]);
    i++;
  }
  res[i] = '\0';
  return (res);
}

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char to_upper_with_index(unsigned int i, char c) {
  (void)i;
  return toupper((unsigned char)c);
}

int main(void) {
  const char *original = "hello42";
  char *mapped = ft_strmapi(original, to_upper_with_index);

  if (mapped) {
    printf("Original: %s\n", original);
    printf("Mapped  : %s\n", mapped);
    free(mapped);
  } else {
    printf("Error allocating memory\n");
  }

  return 0;
}

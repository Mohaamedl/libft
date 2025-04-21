#include "libft.h"
#include <string.h>
char *ft_strjoin(const char *s1, const char *s2) {
  char *str;
  size_t len1 = 0;
  size_t len2 = 0;
  size_t i = 0;
  size_t j = 0;

  if (s1 != NULL)
    len1 = strlen(s1);
  if (s2 != NULL)
    len2 = strlen(s2);
  str = malloc(len1 + len2 + 1);
  if (!str)
    return (NULL);
  i = 0;
  j = 0;
  if (s1)
    while (s1[i])
      str[j++] = s1[i++];
  i = 0;
  if (s2)
    while (s2[i])
      str[j++] = s2[i++];
  str[j] = 0;
  return (str);
}

#include <stdio.h>

int main(void) {
  char *joined = ft_strjoin("42", " here");
  if (joined) {
    printf("%s\n", joined);
    free(joined);
  }

  char *only = ft_strjoin(NULL, "42");
  if (only) {
    printf("%s\n", only);
    free(only);
  }

  char *none = ft_strjoin(NULL, NULL);
  if (!none)
    printf("NULL correctly returned\n");

  return 0;
}

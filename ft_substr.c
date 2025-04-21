#include <libft.h>

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

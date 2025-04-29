/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddadi <mhaddadi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 10:47:26 by mhaddadi          #+#    #+#             */
/*   Updated: 2025/04/27 10:47:42 by mhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"
#include <stdio.h>

// Test for ft_atoi
void test_ft_atoi() {
  printf("Testing ft_atoi:\n");
  // Normal cases
  printf("Result for '123': %d\n", ft_atoi("123"));
  printf("Result for '-123': %d\n", ft_atoi("-123"));
  printf("Result for '0': %d\n", ft_atoi("0"));
  printf("Result for '   123abc': %d\n", ft_atoi("   123abc"));
  // Edge cases
  printf("Result for '2147483647' (max int): %d\n", ft_atoi("2147483647"));
  printf("Result for '-2147483648' (min int): %d\n", ft_atoi("-2147483648"));
  printf("Result for '999999999' (overflow): %d\n", ft_atoi("999999999"));
  printf("Result for empty string: %d\n", ft_atoi(""));
  printf("Result for '  ' (only spaces): %d\n", ft_atoi("  "));
}

// Test for ft_bzero
void test_ft_bzero() {
  printf("Testing ft_bzero:\n");
  char str1[] = "Hello";
  ft_bzero(str1, 3);
  printf("Result for bzero(3) on 'Hello': %s\n", str1); // Expected: "Hel"
  ft_bzero(str1, 0);
  printf("Result for bzero(0): %s\n", str1);// Expected:"Hel" remains unchanged
  ft_bzero(NULL, 3); // Edge case: NULL pointer
}

// Test for ft_calloc
void test_ft_calloc() {
  printf("Testing ft_calloc:\n");
  int *arr = ft_calloc(5, sizeof(int));
  for (int i = 0; i < 5; i++) {
    printf("arr[%d] = %d\n", i, arr[i]); // Expected: 0
  }
  free(arr);
  // Edge case: 0 size
  arr = ft_calloc(0, sizeof(int));
  printf("calloc with size 0: %p\n",
         arr); // Expected: NULL or some valid pointer (depends on your malloc
               // implementation)
  free(arr);
}

// Test for ft_isalnum
void test_ft_isalnum() {
  printf("Testing ft_isalnum:\n");
  // Normal cases
  printf("Is 'A' alphanumeric? %d\n", ft_isalnum(65));
  printf("Is '1' alphanumeric? %d\n", ft_isalnum('1'));
  printf("Is '&' alphanumeric? %d\n", ft_isalnum('&'));
  // Edge cases
  printf("Is ' ' alphanumeric? %d\n",
         ft_isalnum(' ')); // Space is not alphanumeric
  printf("Is 127 alphanumeric? %d\n",
         ft_isalnum(127)); // ASCII control character
}

// Test for ft_isalpha
void test_ft_isalpha() {
  printf("Testing ft_isalpha:\n");
  // Normal cases
  printf("Is 'A' alpha? %d\n", ft_isalpha('A'));
  printf("Is 'z' alpha? %d\n", ft_isalpha('z'));
  // Edge cases
  printf("Is '1' alpha? %d\n", ft_isalpha('1'));
  printf("Is ' ' alpha? %d\n", ft_isalpha(' '));
}

// Test for ft_isascii
void test_ft_isascii() {
  printf("Testing ft_isascii:\n");
  // Normal cases
  printf("Is 'A' ASCII? %d\n", ft_isascii('A'));
  //printf("Is '€' ASCII? %d\n", ft_isascii('€')); // € is not ASCII
  // Edge cases
  printf("Is 127 ASCII? %d\n", ft_isascii(127)); // ASCII upper limit
  printf("Is -1 ASCII? %d\n", ft_isascii(-1));   // Below ASCII range
}

// Test for ft_isdigit
void test_ft_isdigit() {
  printf("Testing ft_isdigit:\n");
  // Normal cases
  printf("Is '9' digit? %d\n", ft_isdigit('9'));
  printf("Is 'a' digit? %d\n", ft_isdigit('a'));
  // Edge cases
  printf("Is '0' digit? %d\n", ft_isdigit('0'));
  printf("Is ' ' digit? %d\n", ft_isdigit(' ')); // Space is not a digit
}

// Test for ft_itoa
void test_ft_itoa() {
  printf("Testing ft_itoa:\n");
  // Normal cases
  printf("itoa(123) = %s\n", ft_itoa(123));
  printf("itoa(-456) = %s\n", ft_itoa(-456));
  // Edge cases
  printf("itoa(0) = %s\n", ft_itoa(0)); // Expected: "0"
  printf("itoa(-2147483648) = %s\n",
         ft_itoa(-2147483648)); // Expected: "-2147483648"
}

// Test for ft_lstnew
void test_ft_lstnew() {
  printf("Testing ft_lstnew:\n");
  t_list *new_node = ft_lstnew("Hello");
  printf("New node content: %s\n", (char *)new_node->content);
  free(new_node);
  // Edge case: NULL input
  new_node = ft_lstnew(NULL);
  printf("New node content with NULL: %p\n",
         new_node ? new_node->content : NULL);
  free(new_node);
}

// Test for ft_memchr
void test_ft_memchr() {
  printf("Testing ft_memchr:\n");
  char str[] = "Hello World";
  // Normal cases
  char *result = ft_memchr(str, 'W', 12);
  if (result)
    printf("Found 'W' at position: %ld\n", result - str);
  else
    printf("'W' not found.\n");
  // Edge case: NULL pointer
  result = ft_memchr(NULL, 'H', 12);
  printf("memchr with NULL pointer: %p\n", result);
}

// Test for ft_memcmp
void test_ft_memcmp() {
  printf("Testing ft_memcmp:\n");
  // Normal cases
  char str1[] = "Hello";
  char str2[] = "Hello";
  printf("memcmp(str1, str2, 5) = %d\n", ft_memcmp(str1, str2, 5));
  // Edge case: comparing NULL
  printf("memcmp(NULL, str2, 5) = %d\n", ft_memcmp(NULL, str2, 5));
}

// Test for ft_memcpy
void test_ft_memcpy() {
  printf("Testing ft_memcpy:\n");
  // Normal case
  char dest[6] = "XXXXX";
  char src[] = "Hello";
  ft_memcpy(dest, src, 5);
  printf("memcpy result: %s\n", dest);
  // Edge cases
  ft_memcpy(dest, src, 0); // Expected: No change
  printf("memcpy with size 0: %s\n", dest);
  ft_memcpy(NULL, src, 5);  // Edge case: NULL destination
  ft_memcpy(dest, NULL, 5); // Edge case: NULL source
}

// Test for ft_memmove
void test_ft_memmove() {
  printf("Testing ft_memmove:\n");
  char str[] = "Hello World";
  // Normal case
  ft_memmove(str + 6, str, 5);
  printf("memmove result: %s\n", str); // Expected: "Hello Hello"
  // Edge cases
  ft_memmove(NULL, str, 5); // NULL destination
	ft_memmove(str, NULL, 5); // NULL source

}

// Test for ft_memset
void test_ft_memset() {
  printf("Testing ft_memset:\n");
  char str[] = "Hello World";
  // Normal case
  ft_memset(str, 'x', 5);
  printf("memset result: %s\n", str); // Expected: "xxxxx World"
  // Edge case
  ft_memset(NULL, 'x', 5); // NULL pointer
}

// Test for ft_putchar_fd
void test_ft_putchar_fd() {
  printf("Testing ft_putchar_fd:\n");
  ft_putchar_fd('A', 1);
  ft_putchar_fd('\n', 1);
  // Edge case: NULL file descriptor
  ft_putchar_fd('A', -1); // Invalid fd, should be safely handled
}

// Test for ft_putendl_fd
void test_ft_putendl_fd() {
  printf("Testing ft_putendl_fd:\n");
  ft_putendl_fd("Hello World", 1);
  // Edge case: NULL file descriptor
  ft_putendl_fd("Test", -1);
}

// Test for ft_putnbr_fd
void test_ft_putnbr_fd() {
  printf("Testing ft_putnbr_fd:\n");
  ft_putnbr_fd(123, 1);
  ft_putnbr_fd(-456, 1);
  ft_putnbr_fd(0, 1);
  // Edge case: NULL file descriptor
  ft_putnbr_fd(9999, -1);
}

// Test for ft_putstr_fd
void test_ft_putstr_fd() {
  printf("Testing ft_putstr_fd:\n");
  ft_putstr_fd("Hello World", 1);
  // Edge case: NULL file descriptor
  ft_putstr_fd("Test", -1);
}

// Test for ft_split
void test_ft_split() {
  printf("Testing ft_split:\n");
  char **result = ft_split("This4should4be4printed4one4per44line444as4you444can44444444see44444here444444444444",
						   '4');
  for (int i = 0; result[i]; i++) {
    printf("split[%d] = %s\n", i, result[i]);
    free(result[i]);
  }
  free(result);
  // Edge case: No delimiter
  result = ft_split("Hello", 'x');
  printf("split with no delimiter:\n");
  for (int i = 0; result[i]; i++) {
    printf("split[%d] = %s\n", i, result[i]);
    free(result[i]);
  }
  free(result);
  // Edge case: Empty string
  result = ft_split("", ' ');
  printf("split with empty string:\n");
  for (int i = 0; result[i]; i++) {
    printf("split[%d] = %s\n", i, result[i]);
    free(result[i]);
  }
  free(result);
}

// Test for ft_strchr
void test_ft_strchr() {
  printf("Testing ft_strchr:\n");
  char *result = ft_strchr("Hello World", 'o');
  printf("Found 'o' at position: %ld\n", result - "Hello World");
	// Edge case
  result = ft_strchr("Hello", 'z');
  if (result)
    printf("Found 'z' at position: %ld\n", result - "Hello");
  else
    printf("'z' not found.\n");
}

// Test for ft_strdup
void test_ft_strdup() {
  printf("Testing ft_strdup:\n");
  char *dup = ft_strdup("Hello World");
  printf("Duplication result: %s\n", dup);
  free(dup);
  // Edge case: NULL input
  dup = ft_strdup(NULL);
  printf("Duplication of NULL: %p\n", dup); // Expected: NULL or an empty string
  free(dup);
}

void	to_upper_with_index_even(unsigned int i, char *c)
{
	if ((i + 1) % 2 == 0)
		*c = (*c >= 'a' && *c <= 'z') ? *c - 32 : *c;
}


// Test for ft_striteri
void test_ft_striteri() {
  printf("Testing ft_striteri:\n");
  char str[] = "Hello";
  ft_striteri(str, to_upper_with_index_even);
  printf("str after striteri: %s\n",
         str); // Expected output based on function logic
}

// Test for ft_strjoin
void test_ft_strjoin() {
  printf("Testing ft_strjoin:\n");
  char *result = ft_strjoin("Hello", " World");
  printf("strjoin result: %s\n", result); // Expected: "Hello World"
  free(result);
  result = ft_strjoin("", "Test");
  printf("strjoin with empty first string: %s\n", result); // Expected: "Test"
  free(result);
  result = ft_strjoin("Test", "");
  printf("strjoin with empty second string: %s\n", result); // Expected: "Test"
  free(result);
}

// Test for ft_strlcat
void test_ft_strlcat() {
  printf("Testing ft_strlcat:\n");
  char dest[20] = "Hello ";
  char src[] = "World!";
  size_t len = ft_strlcat(dest, src, 20);
  printf("Result after strlcat: %s (Length: %zu)\n", dest, len);
  // Edge case
  ft_strlcat(dest, src, 5);
  printf("strlcat with insufficient space: %s\n", dest);
}

// Test for ft_strlcpy
void test_ft_strlcpy() {
  printf("Testing ft_strlcpy:\n");
  char dest[20];
  char src[] = "Hello";
  size_t len = ft_strlcpy(dest, src, 20);
  printf("strlcpy result: %s (Length: %zu)\n", dest, len);
}

// Test for ft_strlen
void test_ft_strlen() {
  printf("Testing ft_strlen:\n");
  printf("Length of 'Hello': %zu\n", ft_strlen("Hello"));
  // Edge case
  printf("Length of empty string: %zu\n", ft_strlen(""));
}

char	to_upper_with_index(unsigned int i, char c)
{
	(void) i;
	return ft_toupper(c);
}

// Test for ft_strmapi
void test_ft_strmapi() {
  printf("Testing ft_strmapi:\n");
  char *result =
      ft_strmapi("Hello", to_upper_with_index);
  printf("Result after strmapi: %s\n", result);
  free(result);
  result = ft_strmapi("", to_upper_with_index);
  printf("Result after strmapi on empty string: %s\n", result); // Expected: ""
  free(result);
}

// Test for ft_strncmp
void test_ft_strncmp() {
  printf("Testing ft_strncmp:\n");
  printf("Comparing 'Hello' and 'Hello': %d\n",
         ft_strncmp("Hello", "Hello", 5)); // Expected: 0
  printf("Comparing 'Hello' and 'Hellz': %d\n",
         ft_strncmp("Hello", "Hellz", 5)); // Expected: Negative value
}

// Test for ft_strnstr
void test_ft_strnstr() {
  printf("Testing ft_strnstr:\n");
  char *result = ft_strnstr("Hello World", "World", 11);
  printf("Found 'World' at position: %ld\n", result - "Hello World");
  
	// Edge case
  result = ft_strnstr("Hello", "World", 5);
  if (result)
    printf("Found 'World': %s\n", result);
  else
    printf("'World' not found.\n");

}

// Test for ft_strrchr
void test_ft_strrchr() {
  printf("Testing ft_strrchr:\n");
  char *result = ft_strrchr("Hello World", 'o');
  printf("Last 'o' found at position: %ld\n", result - "Hello World");

}

// Test for ft_strtrim
void test_ft_strtrim() {
  printf("Testing ft_strtrim:\n");
  char *result = ft_strtrim("   Hello   ", " ");
  printf("Trimmed string: %s\n", result); // Expected: "Hello"
  free(result);
}

// Test for ft_substr
void test_ft_substr() {
  printf("Testing ft_substr:\n");
  char *result = ft_substr("Hello World", 6, 5);
  printf("Substr result: %s\n", result); // Expected: "World"
  free(result);
  result = ft_substr("Hello", 10, 5);
  printf("Substr with out of range start: %s\n", result); // Expected: ""
  free(result);
}

// Test for ft_tolower
void test_ft_tolower() {
  printf("Testing ft_tolower:\n");
  printf("ft_tolower('A') = %c\n", ft_tolower('A'));
  printf("ft_tolower('z') = %c\n", ft_tolower('z'));
}
 
// Test for ft_toupper
void test_ft_toupper() {
  printf("Testing ft_toupper:\n");
  printf("ft_toupper('a') = %c\n", ft_toupper('a'));
  printf("ft_toupper('Z') = %c\n", ft_toupper('Z'));
}

void print_list(t_list *lst) {
  printf("List: ");
  while (lst) {
    printf("%d -> ", *(int *)lst->content);
    lst = lst->next;
  }
  printf("NULL\n");
}

void increment(void *content) {
  if (content)
    (*(int *)content)++;
}

void *duplicate(void *content) {
  int *new = malloc(sizeof(int));
  if (!new)
    return (NULL);
  *new = *(int *)content;
  return (new);
}

void delete(void *content) { free(content); }

int test_list(void) {
  t_list *lst = NULL;
  t_list *map_lst = NULL;
  int *i;

  for (int j = 1; j <= 5; j++) {
    i = malloc(sizeof(int));
    *i = j;
    ft_lstadd_front(&lst, ft_lstnew(i));
  }

  printf("after ft_lstadd_front:\n");
  print_list(lst);

  printf("list size: %d\n", ft_lstsize(lst));

  t_list *last = ft_lstlast(lst);
  printf("Last element: %d\n", *(int *)last->content);

  int *val = malloc(sizeof(int));
  *val = 41;
  ft_lstadd_back(&lst, ft_lstnew(val));
  printf("After ft_lstadd_back:\n");
  print_list(lst);

  ft_lstiter(lst, increment);
  printf("After ft_lstiter:\n");
  print_list(lst);

  map_lst = ft_lstmap(lst, duplicate, delete);
  printf("Maped list:\n");
  print_list(map_lst);
  printf("Original list:\n");
  print_list(lst);

  ft_lstclear(&lst, delete);
  ft_lstclear(&map_lst, delete);

  if (!lst && !map_lst)
    printf("Lists succecfuly cleaned.\n");

  return (0);
}




int main() {
  /*
	test_ft_atoi();
  test_ft_bzero();
  test_ft_calloc();
  test_ft_isalnum();
  test_ft_isalpha();
  test_ft_isascii();
  test_ft_isdigit();
  test_ft_itoa();
	test_ft_lstnew();
  test_ft_memchr();
  test_ft_memcmp();
  test_ft_memcpy();
  test_ft_memmove();
  test_ft_memset();
  test_ft_putchar_fd();
  test_ft_putendl_fd();
  test_ft_putnbr_fd();
  test_ft_putstr_fd();
  test_ft_split();
  test_ft_strchr();
  test_ft_strdup();
  test_ft_striteri();
  test_ft_strjoin();
  test_ft_strlcat();
  test_ft_strlcpy();
  test_ft_strlen();
  test_ft_strmapi();
  test_ft_strncmp();
  test_ft_strnstr();
  test_ft_strrchr();
  test_ft_strtrim();
  test_ft_substr();
  test_ft_tolower();
  test_ft_toupper();
  */
  test_list();

	return 0;
}


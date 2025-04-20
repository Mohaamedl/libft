#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

/**
 * @brief Checks for an alphabetic character.
 */
int	ft_isalpha(int c);

/**
 * @brief Checks for a digit (0 through 9).
 */
int	ft_isdigit(int c);

/**
 * @brief Checks for an alphanumeric character.
 */
int	ft_isalnum(int c);

/**
 * @brief Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
 */
int	ft_isascii(int c);

/**
 * @brief Checks for any printable character including space.
 */
int	ft_isprint(int c);

/**
 * @brief Calculates the length of the string s, excluding the terminating null byte.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief Fills the first len bytes of the memory area pointed to by b with the constant byte c.
 */
void	*ft_memset(void *b, int c, size_t len);

/**
 * @brief Writes n zeroed bytes to the string s.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief Copies n bytes from memory area src to memory area dst.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Copies len bytes from src to dst. The memory areas may overlap.
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/**
 * @brief Copies up to dstsize - 1 characters from the string src to dst, null-terminating the result.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief Appends the string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 characters.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief Converts a lowercase letter to uppercase.
 */
int	ft_toupper(int c);

/**
 * @brief Converts an uppercase letter to lowercase.
 */
int	ft_tolower(int c);

/**
 * @brief Locates the first occurrence of c in the string s.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief Locates the last occurrence of c in the string s.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Compares at most the first n bytes of s1 and s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Scans memory area s for the byte c.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares the first n bytes of the memory areas s1 and s2.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Locates the first occurrence of the null-terminated string needle in haystack, where not more than len characters are searched.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief Converts the initial portion of the string pointed to by str to int.
 */
int	ft_atoi(const char *str);

/**
 * @brief Allocates memory for an array of count elements of size bytes each and returns a pointer to the allocated memory.
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * @brief Returns a pointer to a new string which is a duplicate of the string s1.
 */
char	*ft_strdup(const char *s1);

/* Additional functions */

/**
 * @brief Returns a substring from the string s.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Concatenates two strings into a new string.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Removes all characters from the beginning and end of s1 that are in set.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Splits the string s using the delimiter c.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief Converts an integer n to a string.
 */
char	*ft_itoa(int n);

/**
 * @brief Applies function f to each character of the string, creating a new string with the results.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Applies function f to each character of the string, modifying it in-place.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
 * @brief Outputs the character c to the given file descriptor.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs the string s to the given file descriptor.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs the string s to the given file descriptor, followed by a newline.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs the integer n to the given file descriptor.
 */
void	ft_putnbr_fd(int n, int fd);

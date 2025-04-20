char	*ft_strdup(const char *s)
{
	char 	*dest;
	size_t	i;

	dest = (char *) malloc((ft_strlen(s)) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

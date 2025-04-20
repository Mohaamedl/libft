char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char	c_c;

	c_c = (char) c;
	i = 0;
	while(s[i])
	{
		if(s[i] == c_c)
			return ((char *) &s[i]);
		i++;
	}
	if(s[i] == c_c)
		return ((char *) &s[i]);

	return (NULL);

}


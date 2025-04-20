char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char	*res;
	char	c_c;

	c_c = (char) c;
	i = 0;
	res = NULL;
	while(s[i])
	{
		if (s[i] == c_c)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == c_c)
		res = (char *) &s[i];
	return (res);

}

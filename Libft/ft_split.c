#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		n++;
		while (*s && *s == c)
			s++;
	}
	return (n);
}

static	size_t	get_end_position(char const *s, char c, size_t start)
{
	size_t	i;

	i = start;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static	size_t	get_start_position(char const *s, char c, size_t start)
{
	size_t	i;

	i = start;
	while (s[i] == c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	size_t		words;
	size_t		i;
	size_t		start;
	size_t		end;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	start = 0;
	while (i < words)
	{
		start = get_start_position(s, c, start);
		end = get_end_position(s, c, start);
		arr[i] = ft_substr(s, start, end - start);
		start = end + 1;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

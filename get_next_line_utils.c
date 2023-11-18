#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *buf,char *full_line)
{
	char	*str;
	int		i;
	int		j;
	int		total_len;

	if (!full_line)
		return NULL;
	if (!buf)
		total_len = ft_strlen(full_line);
	else
		total_len = ft_strlen(buf) + ft_strlen(full_line);
	str = malloc(total_len + 1);
	if (!str)
		return (NULL);
	
	j = 0;
	if (buf)
	{
		i = 0;
		while (buf[i] != '\0')
		str[j++] = buf[i++];
	}
	i = 0;
	while(full_line[i] != '\0')
		str[j++] = full_line[i++];	
	str[j] = '\0';
	if (buf)
		free(buf);
	return (str);
}

int check_newline(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return 1;
		i++;
	}
	return (0);
}
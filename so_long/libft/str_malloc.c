/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_malloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvolpi <mvolpi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:16:11 by mvolpi            #+#    #+#             */
/*   Updated: 2022/03/14 11:16:25 by mvolpi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*output;
	int		len;

	len = ft_strlen(str) + 1;
	output = malloc(len);
	if (output == 0)
		return (NULL);
	ft_strlcpy(output, (char *)str, len);
	return (output);
}

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*output;
	size_t	src_len;

	if (src == NULL)
		return (NULL);
	src_len = ft_strlen(src);
	if (len > src_len)
		len = src_len;
	if (start >= src_len)
	{
		output = malloc(1);
		if (output == NULL)
			return (NULL);
		*output = 0;
	}
	else
	{	
		len++;
		output = malloc(len);
		if (output == NULL)
			return (NULL);
		ft_strlcpy(output, (char *)src + start, len);
	}
	return (output);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len1;
	int		total_len;
	char	*output;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1) + 1;
	total_len = len1 + ft_strlen(s2);
	output = malloc (total_len);
	if (output == NULL)
		return (NULL);
	ft_strlcpy(output, (char *)s1, len1);
	ft_strlcat(output, (char *)s2, total_len);
	return (output);
}

char	*ft_strtrim(const char *str, const char *set)
{
	char	*start;
	char	*end;

	if (str != NULL && set != NULL)
	{
		start = ft_strdiffc(str, set);
		end = ft_strrdiffc(str, set);
		if (start == end)
		{
			start = malloc(1);
			*start = '\0';
			return (start);
		}
		return (ft_substr(start, 0, end - start + 1));
	}
	return (NULL);
}

char	*ft_strmapi(char const	*str, char (*f)(unsigned int, char))
{
	char	*output;
	int		i;

	if (!str || !f)
		return (NULL);
	output = (char *)malloc(ft_strlen(str) + 1);
	if (!output)
		return (NULL);
	i = 0;
	while (str[i])
	{
		output[i] = f(i, str[i]);
		i++;
	}
	output[i] = '\0';
	return (output);
}

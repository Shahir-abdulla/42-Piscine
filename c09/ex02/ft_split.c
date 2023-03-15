/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:04:52 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/11 09:53:09 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_delimeter(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset ++;
	}
	return (0);
}

int	get_word_count(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_delimeter(*str, charset))
			str ++;
		if (*str)
			count ++;
		while (*str && !(is_delimeter(*str, charset)))
			str ++;
	}
	return (count);
}

int	str_len_until_delim(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_delimeter(str[i], charset))
		i ++;
	return (i);
}

char	*get_word(char *str, char *charset)
{
	int		size;
	char	*word;
	int		i;

	size = str_len_until_delim(str, charset);
	word = (char *)malloc(sizeof(char) * size + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !(is_delimeter(str[i], charset)))
	{
		word[i] = str[i];
		i ++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**words;
	int		count;

	size = get_word_count(str, charset);
	words = (char **)malloc(sizeof(char *) * (size + 1));
	if (words == NULL)
		return (NULL);
	count = 0;
	while (*str)
	{
		while (*str && is_delimeter(*str, charset))
			str++;
		if (*str)
		{
			words[count] = get_word(str, charset);
			count += 1;
		}
		while (*str && !(is_delimeter(*str, charset)))
			str ++;
	}
	words[count] = 0;
	return (words);
}

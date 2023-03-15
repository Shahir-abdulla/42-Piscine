/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shabdull <shabdull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:39:29 by shabdull          #+#    #+#             */
/*   Updated: 2023/03/08 10:06:28 by shabdull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_delimeter(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}


int	get_word_count(char *str, char *charset)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (str[index])
	{
		while (str[index] && is_delimeter(str[index], charset))
			index ++;
		if (str[index] != 0)
			count ++;
		while (str[index] && !(is_delimeter(str[index], charset)))
			index ++;
	}
	return (count);
}

int	get_word_length(char *str, char *charset)
{
	int	length;

	length = 0;
	while (*str && is_delimeter(*str, charset))
		str ++;
	while (*str && !(is_delimeter(*str, charset)))
	{
		length ++;
		str ++;
	}
	return (length);
}

char	*get_word(char **str, char *charset)
{
	int		size;
	char	*word;
	int		index;

	size = get_word_length(*str, charset);
	word = (char *)malloc(sizeof(char) * (size + 1));
	index = 0;
	while (**str && is_delimeter(**str, charset))
		(*str)++;
	while (**str && !(is_delimeter(**str, charset)))
	{
		word[index] = **str;
		index ++;
		(*str)++;
	}
	word[index] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		w_count;
	char	**words;
	int		count;

	count = 0;
	w_count = get_word_count(str, charset);
	words = (char **)malloc(sizeof(char *) * (w_count + 1));
	if (words == NULL)
		return (NULL);
	while (count < w_count)
	{
		words[count] = get_word(&str, charset);
		count ++;
	}
	words[count] = 0;
	return (words);
}

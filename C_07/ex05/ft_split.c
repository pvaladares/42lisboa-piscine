/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:34:16 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/02 13:42:07 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// Function checks if the char is included within the given charset
// Returns 1 if it is found
// Returns 0 if it is NOT found
int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

// Function counts the number of words
int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		if (str[i])
			words++;
		while (str[i] && !is_separator(str[i], charset))
			i++;
	}
	return (words);
}

// Function returns the length of chars before the next separator
int	find_word_length(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_separator(str[i], charset))
		i++;
	return (i);
}

// Functions allocates and copies to a new variable the word
char	*create_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = find_word_length(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

// Function splits a string of chars depending on charset string
char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_words(str, charset) + 1));
	while (*str)
	{
		while (*str && is_separator(*str, charset))
			str++;
		if (*str)
		{
			strings[i] = create_word(str, charset);
			i++;
		}
		while (*str && !is_separator(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrada <fbarrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:15:11 by fbarrada          #+#    #+#             */
/*   Updated: 2026/05/07 15:53:40 by fbarrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] != '\0')
			words++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (words);
}

static char	**freeall(char **box, int words)
{
	while (words >= 0)
	{
		free(box[words]);
		words--;
	}
	free(box);
	return (NULL);
}

static char	**allocate_words(const char *str, char c, char **box)
{
	int	i;
	int	start;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		start = 0;
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i + start] && str[i + start] != c)
			start++;
		box[words] = malloc(sizeof(char) * start + 1);
		if (!box[words])
			return (freeall(box, words));
		start = 0;
		while (str[i] && str[i] != c)
			box[words][start++] = str[i++];
		box[words][start] = '\0';
		words++;
	}
	return (box);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**box;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	box = malloc(sizeof(char *) * (count + 1));
	if (!box)
		return (NULL);
	if (!(allocate_words(s, c, box)))
		return (NULL);
	box[count] = 0;
	return (box);
}
// int	main(void)
// {
// 	char	**result;
// 	char	*words;
// 	int		i;

// 	words = "";
// 	i = 0;
// 	char * splitme = ft_strdup("Tripouille");
// 	result = ft_split(splitme, ' ');
// 	printf("Teste1:\n");
// 	if (!result)
// 	{
// 		printf("ERRO! String vazia.");
// 		return (0);
// 	}
// 	while (result[i])
// 	{
// 		printf("Palavra na posicao [%i]: %s\n", i, result[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }

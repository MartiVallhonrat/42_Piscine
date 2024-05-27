/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:46:54 by mvallhon          #+#    #+#             */
/*   Updated: 2023/11/09 20:07:22 by mvallhon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	arr_len_calc(char *str, char *charset)
{
	int	i;
	int	size;
	i = 0;
	size = 0;
	while (str[i])
	{
		if (check_sep(str[i + 1], charset) == 1
			&& check_sep(str[i], charset) == 0)
			size++;
		i++;
	}
	printf("arr_len: %d\n", (counter + 1));
	return (size);
}

int	calc_len(char *str, char *charset)
{
	int	counter;
	int	i;

	counter = 0;
	while (str[counter] != '\0')
	{
		i = 0;
		while (charset[i] != '\0')
		{
			if (str[counter] == charset[i])
				return (counter);
			i++;
		}
		counter++;
	}
	printf("calc_len: %d\n", counter);
	return (counter);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	int		len;
	int		arr_len;
	char	**res;

	arr_len = arr_len_calc(str, charset);
	res = (char **) malloc((arr_len + 1) * sizeof (char *));
	res[arr_len] = NULL;
	i = 0;
	k = 0;
	while (k < arr_len)
	{
		len = calc_len(&str[i], charset);
		if (len != 0)
			res[k] = (char *) malloc(len);
		j = 0;
		while (j < len)
		{
			res[k][j] = str[i];
			i++;
			j++;
		}
		if (len != 0)
		{
			res[k][j] = '\0';
			printf("temp_res: %s\n", res[k]);
			k++;
		}
		i++;
	}
	return (res);
}

int	main(void)
{
	int	i;
	char	**res;

	i = 0;
	res = ft_split("123bbaaa456b789c101112a", "abc");
	while (res[i])
	{
		printf("final result: %s\n", res[i]);
		i++;
	}
	return (0);
}

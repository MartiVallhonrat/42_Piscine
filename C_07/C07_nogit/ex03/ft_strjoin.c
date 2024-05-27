/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:54:50 by mvallhon          #+#    #+#             */
/*   Updated: 2023/11/03 11:24:01 by mvallhon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	get_len(char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		j = 0;
		while(strs[i][j] != '\0')
		{
			total++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	total += (i * (size - 1)) + 1; //sumar les sep i el \0
	return (total);
}

char	*concat(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*final;
	
	i = 0;
	k = 0;
	final = (char *) malloc(get_len(strs, size, sep));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			final[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		if (i != (size - 1))
		{
			while (sep[j] != '\0')
			{
				final[k] = sep[j];
				k++;
				j++;
			}
		}
		i++;
	}
	final[k] = '\0';
	return (final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	if (size < 1)
	{
		res = (char *) malloc(1);
		*res = '\0';
		return (res);
	}
	res = concat(size, strs, sep);
	return (res);
}

/*int	main(void)
{
	char *arr[] = { "", "Hello", "", "world" };
	printf("%s", ft_strjoin(4, arr, "-"));
	return (0);
}*/

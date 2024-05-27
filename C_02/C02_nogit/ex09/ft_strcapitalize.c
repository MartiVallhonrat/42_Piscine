/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:47:22 by mvallhon          #+#    #+#             */
/*   Updated: 2023/10/24 15:19:29 by mvallhon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_lower(char	*str, int	*j)
{
	while ((str[*j] >= 'a' && str[*j] <= 'z')
		|| (str[*j] >= 'A' && str[*j] <= 'Z'))
	{
		if (str[*j] >= 'A' && str[*j] <= 'Z')
			str[*j] = str[*j] + 32;
		*j = *j + 1;
	}
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	j;

	if ((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z'))
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		j = 1;
		check_lower(str, &j);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 32 && str[i] <= 47)
				|| (str[i] >= 58 && str[i] <= 64))
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] = str[i + 1] - 32;
			j = i + 2;
			check_lower(str, &j);
		}
		i++;
	}
	return (str);
}

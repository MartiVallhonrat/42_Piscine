/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvallhon <mvallhon@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:23:09 by mvallhon          #+#    #+#             */
/*   Updated: 2023/10/26 15:20:17 by mvallhon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_chars_to_int(char *str, int *i, int *minus)
{
	int	res;

	res = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		res = res * 10 + (str[*i] - '0');
		*i = *i + 1;
	}
	if (*minus % 2 == 1)
		return (res * (-1));
	else
		return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;

	i = 0;
	minus = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= ' ' || str[i] == '+')
		{
			i++;
			continue ;
		}
		else if (str[i] == '-')
			minus++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			return (get_chars_to_int(str, &i, &minus));
		}
		else
			return (0);
		i++;
	}
	return (0);
}

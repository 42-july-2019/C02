/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:43:31 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/09 11:17:29 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_not_alphanumeric(char c)
{
	if (!(c >= 'a' && c <= 'z'))
	{
		if (!(c >= 'A' && c <= 'Z'))
		{
			if (!(c >= '0' && c <= '9'))
			{
				return (1);
			}
		}
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_new_word;

	is_new_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_new_word == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			is_new_word = 0;
		}
		else if (is_not_alphanumeric(str[i]) == 1)
			is_new_word = 1;
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			is_new_word = 0;
		}
		i++;
	}
	return (str);
}

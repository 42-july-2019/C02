/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 15:43:31 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/08 15:56:02 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		else if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
			is_new_word = 1;
		else
			is_new_word = 0;
		i++;
	}
	return (str);
}

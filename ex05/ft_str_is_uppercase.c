/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:58:45 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/08 13:59:12 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int loop_done;
	int result;

	loop_done = 0;
	result = 1;
	while (loop_done == 0 && *str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else
		{
			loop_done = 1;
			result = 0;
		}
	}
	return (result);
}

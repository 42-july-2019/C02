/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:52:24 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/08 13:39:17 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int loop_done;
	int result;

	loop_done = 0;
	result = 1;
	while (loop_done == 0 && *str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			str++;
		else
		{
			loop_done = 1;
			result = 0;
		}
	}
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:41:13 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/08 13:42:01 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int loop_done;
	int result;

	loop_done = 0;
	result = 1;
	while (loop_done == 0 && *str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
		{
			loop_done = 1;
			result = 0;
		}
	}
	return (result);
}

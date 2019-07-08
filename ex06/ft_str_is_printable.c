/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 14:02:54 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/08 14:04:29 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int loop_done;
	int result;

	loop_done = 0;
	result = 1;
	while (loop_done == 0 && *str != '\0')
	{
		if (*str >= ' ' && *str <= '~')
			str++;
		else
		{
			loop_done = 1;
			result = 0;
		}
	}
	return (result);
}

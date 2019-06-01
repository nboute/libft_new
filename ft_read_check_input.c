/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_check_input.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niboute <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 18:24:58 by niboute           #+#    #+#             */
/*   Updated: 2019/06/01 18:25:00 by niboute          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int		ft_read_check_input(void *data, int (*fct)(char*, void*))
{
	int	ret;
	char	buff[INPUT_SIZE + 1];
	int		validinput;

	validinput = 0;
	while (!validinput)
	{
		ft_putstr("Please enter input. Type \"quit\" to cancel\n");
		ret = read(0, buff, INPUT_SIZE);
		buff[ret] = '\0';
		if (!ft_strcmp(buff, "quit\n"))
			return (1);
		validinput = fct(buff, data);
	}
	return (0);
}

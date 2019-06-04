/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_check_input.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niboute <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 18:24:58 by niboute           #+#    #+#             */
/*   Updated: 2019/06/04 11:20:47 by niboute          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int			ft_read_check_input(char *text, char *error, void *data,
			int (*fct)(char*, void*))
{
	int		ret;
	char	buff[INPUT_SIZE + 1];
	int		validinput;

	validinput = 0;
	while (!validinput)
	{
		ft_putstr(text);
		ft_putstr("Type \"quit\" to leave prompt. PS:program will exit if you"
		"didn't enter a valid input beforehand\n");
		ret = read(0, buff, INPUT_SIZE);
		buff[ret] = '\0';
		if (!ft_strncmp(buff, "quit", 4))
			return (1);
		validinput = fct(buff, data);
		if (!validinput)
		{
			ft_putstr("\x1B[31m");
			ft_putstr(error);
			ft_putstr("\x1B[0m");
		}
	}
	return (0);
}

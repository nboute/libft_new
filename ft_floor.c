/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floor.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 01:11:18 by marvin            #+#    #+#             */
/*   Updated: 2020/06/15 01:22:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

double	ft_floor(double n)
{
	double	d;

	if (n >= LLONG_MAX || n <= LLONG_MIN || n != n)
		return (n);
	d = (double)((long long)n);
	if (d == (long long)n || (long long)n >= 0)
		return (d);
	else
		return (d - 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwasa <miwasa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:08:33 by miwasa            #+#    #+#             */
/*   Updated: 2024/10/22 01:08:33 by miwasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			buf[12];
	int				i;
	unsigned int	m;

	i = 12;
	buf[--i] = '\0';
	if (n >= 0)
		m = n;
	else
		m = -n;
	while (1)
	{
		buf[--i] = '0' + m % 10;
		m /= 10;
		if (!m)
			break ;
	}
	if (n < 0)
		buf[--i] = '-';
	return (ft_strdup(&buf[i]));
}

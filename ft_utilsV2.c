/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilsV2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:29:52 by oer-raou          #+#    #+#             */
/*   Updated: 2024/02/06 12:29:53 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	how_many_to_alloc(int n)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = n;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n /= 10;
	}
	if (tmp > 0)
		return (i);
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	tmp;

	len = how_many_to_alloc(n);
	tmp = (long)n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (str);
	if (tmp < 0)
	{
		tmp = -tmp;
		str[0] = '-';
	}
	str[len--] = '\0';
	if (tmp == 0)
		str[0] = '0';
	while (tmp)
	{
		str[len] = tmp % 10 + '0';
		len--;
		tmp /= 10;
	}
	return (str);
}

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

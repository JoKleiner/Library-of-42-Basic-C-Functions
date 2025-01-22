/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:36:18 by joklein           #+#    #+#             */
/*   Updated: 2025/01/22 14:20:37 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	mem_fill2(char *ptr, long num, int i)
{
	ptr[i] = '\0';
	ptr[0] = '-';
	while (num > 0)
	{
		ptr[i - 1] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
}

void	inttoptr(long num, char *ptr)
{
	int		i;
	long	temp;

	if (num == 0)
	{
		ptr[0] = '0';
		ptr[1] = '\0';
		return ;
	}
	i = 0;
	if (num < 0)
	{
		i++;
		num = -num;
	}
	temp = num;
	while (temp > 0)
	{
		temp = temp / 10;
		i++;
	}
	mem_fill2(ptr, num, i);
}

void	ft_putnbr_fd(int num, int fd)
{
	char	*ptr;
	char	str[12];
	long	numlong;

	numlong = num;
	ptr = str;
	inttoptr(numlong, ptr);
	write(fd, ptr, ft_strlen((const char *)ptr));
}

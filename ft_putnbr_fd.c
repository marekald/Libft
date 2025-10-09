/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marekald <marekald@student.42urdiliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:38:08 by marekald          #+#    #+#             */
/*   Updated: 2025/10/09 16:07:50 by marekald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	long	nb;

	s = "0123456789";
	nb = n;
	if (nb > 2147483647 || nb < -2147483648)
		return ;
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * -1;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	write(fd, &s[nb % 10], 1);
}
/*
int	main(void)
{
	int	n;

	n = 2147483645;
	ft_putnbr_fd(n, 1);
}
*/

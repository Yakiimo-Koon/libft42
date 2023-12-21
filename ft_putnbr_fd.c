/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:53:36 by klefranc          #+#    #+#             */
/*   Updated: 2023/12/21 11:58:40 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr_uns;

	if (n < 0)
	{
		nbr_uns = (unsigned int)(-1 * n);
		ft_putchar_fd('-', fd);
	}
	else
		nbr_uns = (unsigned int)n;
	if (nbr_uns >= 10)
	{
		ft_putnbr_fd((nbr_uns / 10), fd);
		ft_putnbr_fd((nbr_uns % 10), fd);
	}
	else
		ft_putchar_fd((n + 48), fd);
}

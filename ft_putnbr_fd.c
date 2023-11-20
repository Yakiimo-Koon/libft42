/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:55:46 by kevin             #+#    #+#             */
/*   Updated: 2023/11/20 15:30:16 by kevin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nbr_uns;

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

/* int main(int argc, char *argv[]) {
    if (argc != 2) {
        write(2, "Usage: ./program_name <number>\n", 30);
        return 1;
    }
    int number = atoi(argv[1]);
    ft_putnbr_fd(number, 1);
    return 0;
}
 */
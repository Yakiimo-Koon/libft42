/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:54:09 by klefranc          #+#    #+#             */
/*   Updated: 2023/12/21 11:55:45 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	int	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == (char)searchedChar)
			return ((char *)(string + i));
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	#include <stdio.h>
// 	#include <string.h>

// 	printf("Original: %s\n", strrchr("Bonjour salut les gars", 'a'));
// 	printf("Result: %s\n", ft_strrchr("Bonjour salut les gars", 'a'));
// 	return (0);
// }
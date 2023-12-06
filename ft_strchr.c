/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:13:05 by kevin             #+#    #+#             */
/*   Updated: 2023/12/06 12:04:06 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char*)s;
	i = 0;
	while (*(ptr + i))
	{
		if (*(ptr + i) == c)
			return (ptr + i);
		i++;
	}
	if (c == '\0')
		return (ptr + i);
	return (0);
}


/* #include <stdio.h>

int main() {
    const char* myString = "Hello, World!";
    char searchChar = 'o';

    char* result = strchr(myString, searchChar);

    if (result != NULL) {
        printf("Caractère trouvé à la position : %ld\n", result - myString);
    } else {
        printf("Caractère non trouvé dans la chaîne.\n");
    }

    return 0;
} */
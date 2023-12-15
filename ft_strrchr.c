/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klefranc <klefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:19:50 by kevin             #+#    #+#             */
/*   Updated: 2023/12/15 10:07:33 by klefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

/* #include <stdio.h>

int main() {
    const char* myString = "Hello, World!";
    char searchChar = 'o';

    char* result = ft_strrchr(myString, searchChar);

    if (result != NULL) {
        printf("Caractère trouvé à la position : %ld\n", result - myString);
    } else {
        printf("Caractère non trouvé dans la chaîne.\n");
    }

    return 0;
} */
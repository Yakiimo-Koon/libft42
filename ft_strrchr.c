/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:19:50 by kevin             #+#    #+#             */
/*   Updated: 2023/11/12 18:03:33 by kevin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *str, int searchedChar)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == searchedChar)
		{
			return ((char*)str + i);
		}
		i--;
	}
	if (searchedChar == '\0')
		return 0;
}

#include <stdio.h>

int main() {
    const char* myString = "Hello, World!";
    char searchChar = 'o';

    char* result = strrchr(myString, searchChar);

    if (result != NULL) {
        printf("Caractère trouvé à la position : %ld\n", result - myString);
    } else {
        printf("Caractère non trouvé dans la chaîne.\n");
    }

    return 0;
}
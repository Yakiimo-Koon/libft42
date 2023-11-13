/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:13:05 by kevin             #+#    #+#             */
/*   Updated: 2023/11/10 11:19:24 by kevin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strchr(const char *str, int searchedChar)
{
	while (*str != '\0')
	{
		if (*str == searchedChar)
		{
			return (char*)str;
		}
		str++;
	}
	if (searchedChar == '\0')
	{
		return 0;
	}
}

#include <stdio.h>

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
}
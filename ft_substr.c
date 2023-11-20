/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:46:43 by kevin             #+#    #+#             */
/*   Updated: 2023/11/20 13:34:59 by kevin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n) {
    size_t i;

    // Copier chaque caractère de src dans dest jusqu'à atteindre n ou la fin de src
    for (i = 0; i < n && src[i] != '\0'; ++i) {
        dest[i] = src[i];
    }

    // Remplir le reste de dest avec des caractères nuls si nécessaire
    for (; i < n; ++i) {
        dest[i] = '\0';
    }

    return dest;
}

char *ft_substr(char const *s, unsigned int start, size_t len) 
{
    // Check if start is beyond the length of the string
    if (start >= ft_strlen(s))
        return NULL;
    // Calculate the actual length of the substring
    size_t actual_len = len;
    if (start + len > ft_strlen(s))
        actual_len = ft_strlen(s) - start;
    // Allocate memory for the substring (+1 for the null terminator)
    char *substring = (char *)malloc(actual_len + 1);
    // Check if memory allocation was successful
    if (substring == NULL)
        return NULL;
    // Copy the substring from the original string
    ft_strncpy(substring, s + start, actual_len);

    // Add null terminator at the end
    substring[actual_len] = '\0';

    return substring;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototype de la fonction ft_substr
char *ft_substr(char const *s, unsigned int start, size_t len);

int main() {
    // Chaîne de test
    const char *originalString = "Hello, World!";

    // Indice de départ et longueur pour la substring
    unsigned int start = 7;
    size_t len = 5;

    // Appel de la fonction ft_substr
    char *substring = ft_substr(originalString, start, len);

    // Vérification si l'allocation a réussi
    if (substring != NULL) {
        // Affichage de la substring
        printf("Original String: %s\n", originalString);
        printf("Substring: %s\n", substring);

        // Libération de la mémoire allouée pour la substring
        free(substring);
    } else {
        // Affichage en cas d'échec de l'allocation
        printf("Allocation failed.\n");
    }

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:04:17 by kevin             #+#    #+#             */
/*   Updated: 2023/11/12 18:44:07 by kevin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

char *strchr(const char *str, int searchedChar);
char *strrchr(const char *str, int searchedChar);
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
int ft_atoi(char *str);
char *ft_strdup(char *src);
void *ft_memset(void* str, int c, size_t n);
void	ft_bzero(void *str, size_t n);

#endif
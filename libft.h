/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:04:17 by kevin             #+#    #+#             */
/*   Updated: 2023/11/19 13:53:28 by kevin            ###   ########.fr       */
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
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int ft_isprint(int c);
void	*ft_memmove(void *dest, const void *src, size_t size);
int	ft_strlen(const char *str);
int	ft_tolower(int c);
int	ft_toupper(int c);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dest, const char *src, size_t size);

#endif
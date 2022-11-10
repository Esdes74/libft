/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:15:41 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/09 23:21:12 by eslamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

// Return 1 if c is alphabethic caractere
int		ft_isalpha(int c);

// Return 1 if c is a numeric caractere
int		ft_isdigit(int c);

// Return 1 if c is a alphabethic or numeric caractere
int		ft_isalnum(int c);

// Return 1 if c is an ascii caractere
int		ft_isascii(int c);

// Return 1 if c is a printable caractere
int		ft_isprint(int c);

// Return size of string passed
size_t	ft_strlen(const char *s);

// Set the n first bytes at c in the memorie pointed by s
void	*ft_memset(void *s, int c, size_t n);

// Same as memset with 0
// Return nothing
void	ft_bzero(void *s, size_t n);

// Copy n first bytes of src memorie to dest memorie
void	*memcpy(void *restrict dest, const void *restrict src, size_t n);

// Return upper caractere of c if is a lowercase caractere
int		ft_toupper(int c);

// Return lower caractere of c if is a uppercase caractere
int		ft_tolower(int c);

// Return first occurence of c in the string s, 0 if not found
char	*ft_strchr(const char *s, int c);

// Return last occurence of c in the string s, 0 if not found
char	*ft_strrchr(const char *s, int c);
// Return negative number if first is less than sec, positive if sec is greater
// than first, and 0 if they are same
int		ft_strncmp(const char *first, const char *sec, size_t n);

#endif

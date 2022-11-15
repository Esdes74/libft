/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslamber <eslamber@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:15:41 by eslamber          #+#    #+#             */
/*   Updated: 2022/11/15 10:58:43 by eslamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

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
void	*ft_memcpy(void *dest, const void *src, size_t n);

// Copy n first bytes of src to dest with a temporarie stocking
void	*ft_memmove(void *dest, const void *src, size_t n);

// Copy n - 1 first caracteres from src to dest
size_t	ft_strlcpy(char *dest, const char *src, size_t n);

// Concatenate src at end of dest
size_t	ft_strlcat(char *dest, const char *src, size_t n);

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

// Return first occurence of c in src
void	*ft_memchr(const void *src, int c, size_t n);

// Return difference (s - c) when differents
int		ft_memcmp(const void *s, const void *c, size_t n);

// Return first occurence of little
char	*ft_strnstr(const char *big, const char *little, size_t n);

// Change int string to int
int		ft_atoi(const char *s);

// Same as malloc but fill with 0
void	*ft_calloc(size_t nbr, size_t size);

// Copy len caracteres from s[start]
// Return this new string or 0 if didn't work
char	*ft_substr(const char *s, unsigned int start, size_t len);

// Return new string what is src concatenated to dest
char	*ft_strjoin(const char *dest, const char *src);

// Return a new string src without caracteres in set
char	*ft_strtrim(const char *src, const char *set);

// Return a new string src without caracteres in set
char	*ft_split(const char *src, const char set);

// Inverse of atoi
char	*ft_itoa(int n);

// Write caractere c in descriptor file fd
void	ft_putchar_fd(char c, int fd);

// Write string s in descriptor file fd
void	ft_putstr_fd(char *s, int fd);

// Write string s in descriptor file fd with end line
void	ft_putendl_fd(char *s, int fd);
#endif

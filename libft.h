/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:54:11 by esali             #+#    #+#             */
/*   Updated: 2023/02/11 11:57:43 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char		*ft_strdup(const char *s1);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strchr(const char *s, int c);
int			ft_isdigit(int c);
int			ft_atoi(const char *str);
size_t		ft_strlen(const char *s);
int			ft_printf(const char *c, ...);
void		ft_putchar(int c);
void		distribute(char c, va_list ap);
void		ft_putstr(char *str);
void		ft_putint(int n);
void		putint(int n);
void		ft_putu(unsigned int n);
void		putu(unsigned int n);
void		dectohex(int n);
void		convert(unsigned long int n);
void		dectohex_up(int n);
void		convert_up(long n);
void		ft_putptr(void *ptr);

#endif

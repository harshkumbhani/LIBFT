/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkumbhan <hkumbhan@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:36:18 by hkumbhan          #+#    #+#             */
/*   Updated: 2023/07/10 13:49:02 by hkumbhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Libraries 

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>

// Data Structure for Linked list
typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define ALLOC_FAIL NULL

// Character type checking functions
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

// Case conversion functions
int		ft_toupper(int c);
int		ft_tolower(int c);

// String length function
size_t	ft_strlen(const char *s);

// String search and comparison functions
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// String manipulation functions
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

// Memory manipulation functions
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

// Dynamic memory allocation functions
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

// Conversion functions
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

// String splitting function
char	**ft_split(char const *s, char c);

// Output functions
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// Bitwise operation function
void	ft_print_bits(int nb);

// Linked list functions
t_list	*ft_lstnew(void	*content);
void	ft_lstadd_front(t_list **lst, t_list *new_node);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new_node);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


// Helper functions for GET NEXT LINE project

char	*get_next_line(int fd);
char	*ft_read_file(int fd, char *stash);
char	*ft_get_line(char *stash);
char	*ft_update_stash(char *stash);
char	*ft_strchr_gnl(char *s, int c);
char	*ft_strjoin_gnl(char *s1, char *s2);
size_t	ft_strlen_gnl(char *s);
void	*ft_memcpy_gnl(void *dst, void *src, size_t n);

// Helper functions for PRINTF project 

int	ft_printf(const char *format, ...);
int	ft_formattype(char c, va_list ap, int *i);
int	ft_putchar(char c);
int	ft_strlen_printf(char *s);
int	ft_putstr(char *s);
int	ft_putnbr(long n);
int	ft_putptr(size_t n);
int	ft_puthex(size_t n, char *base);

#endif
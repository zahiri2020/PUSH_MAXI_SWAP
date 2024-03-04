/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:48:14 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/04 10:28:43 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTIL_H
# define FT_UTIL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	int				content;
	int				i;
	struct s_list	*next;
}					t_list;

int		ft_isdigit(int c);
char	*parsing(char *str);
void	ft_exit(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
char	**ft_split(char *s, char c);
long	ft_atoi(const char *str);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
int		ft_strlen(char *s);
char	*ft_strdup(char *s1);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lst_beforelast(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content, int i);
int		ft_lstsize(t_list *lst);
int		ft_lstclear(t_list *lst);
int		is_duplicate(char **strs);
void	ft_push(t_list **lst, int content);
t_list	*ft_stack_new(int content, t_list **stack);
int		is_sorted(t_list *stack_a);
void	*memfree(char **strs);

#endif
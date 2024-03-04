/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:23:39 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/05 00:07:46 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

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

typedef struct s_ins
{
	char			*content;
	struct s_ins	*next;
}					t_ins;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

//help functions
char	*parsing(char *str);
void	ft_exit(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char *s, char c);
long	ft_atoi(const char *str);
int		ft_strlen(char *s);
char	*ft_strdup(char *s1);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lst_beforelast(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content, int i);
int		ft_lstsize(t_list *lst);
int		ft_lstclear(t_list *lst);
void	ft_push(t_list **lst, int content);
t_list	*ft_stack_new(int content, t_list **stack);
int		is_sorted(t_list *stack_a);

//operations
void	pa(t_list **src, t_list **dest);
void	pb(t_list **src, t_list **dest);
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **a, t_list **b);
void	ra(t_list **lst);
void	rb(t_list **lst);
void	rr(t_list **a, t_list **b);
void	rra(t_list **lst);
void	rrb(t_list **lst);
void	rrr(t_list **a, t_list **b);

//chercker
void	ft_checker(t_list **a, t_list **b);
int		ft_strcmp(char *s1, char *s2);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
void	ins_back(t_ins **lst, t_ins *new);
void	clear_ins(t_ins *lst);

#endif
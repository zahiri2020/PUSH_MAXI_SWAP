/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:23:39 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/04 10:32:53 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "../util/ft_util.h"

typedef struct s_ins
{
	char			*content;
	struct s_ins	*next;
}					t_ins;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif
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
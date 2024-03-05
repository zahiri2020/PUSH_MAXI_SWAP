/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezahiri <ezahiri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 01:40:08 by ezahiri           #+#    #+#             */
/*   Updated: 2024/03/05 21:21:17 by ezahiri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*memfree(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (NULL);
}

int	is_duplicate(char **strs)
{
	int		i;
	int		j;
	long	a;

	a = 0;
	i = 0;
	while (strs[i])
	{
		a = ft_atoi(strs[i]);
		j = i + 1;
		if (a > 2147483647 || a < -2147483648)
			return (1);
		while (strs[j])
		{
			if (a == ft_atoi(strs[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_push(t_list **lst, int content)
{
	t_list	*new;

	new = ft_stack_new(content, lst);
	if (!new)
		return ;
	ft_lstadd_back(lst, new);
}

char	**fill_strs(char **av, int ac)
{
	char		*s;
	char		**strs;
	int			i;
	int			j;

	i = 1;
	j = 0;
	s = NULL;
	if (ac < 2)
		exit(0);
	while (i < ac)
	{
		while (av[i][j] == 32)
			j++;
		if (!av[i][j])
			ft_exit(s);
		s = parsing(av[i]);
		i++;
	}
	strs = ft_split(s, ' ');
	free(s);
	if (is_duplicate(strs))
		ft_exit(memfree(strs));
	return (strs);
}

int	main(int ac, char **av)
{
	char	**strs;
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;

	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	strs = fill_strs(av, ac);
	while (strs[i])
		ft_push(&stack_a, ft_atoi(strs[i++]));
	memfree(strs);
	if (!is_sorted(stack_a))
		exit(ft_lstclear(stack_a));
	if (ft_lstsize(stack_a) == 2)
		sa(&stack_a);
	else if (ft_lstsize(stack_a) == 3)
		ft_sorted_3(&stack_a);
	else if (ft_lstsize(stack_a) == 5)
		ft_sorted_5(&stack_a, &stack_b);
	else
		big_sort(&stack_a, &stack_b);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
}

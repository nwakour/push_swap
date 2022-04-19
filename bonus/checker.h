/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:02:58 by nwakour           #+#    #+#             */
/*   Updated: 2021/07/15 13:30:56 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"

typedef struct s_ilist
{
	int				nb;
	struct s_ilist	*next;
}				t_ilist;

t_ilist	*ft_int_lstnew(int nb);
void	ft_int_lstadd_back(t_ilist **alst, t_ilist *l_new);
void	ft_int_lstadd_front(t_ilist **alst, t_ilist *l_new);
int		ft_int_lstsize(t_ilist *lst);
void	ft_int_lstclear(t_ilist **lst);
t_ilist	*ft_int_lstdup(t_ilist *list);
int		parse(char **argv, t_ilist	**a);
void	swap(t_ilist *stack);
void	push(t_ilist **a, t_ilist **b);
void	rotate(t_ilist **stack);
void	rev_rotate(t_ilist **stack);
int		is_sorted(t_ilist *a, t_ilist *b);
int		corr_op(t_ilist **a, t_ilist **b, char *s);

#endif

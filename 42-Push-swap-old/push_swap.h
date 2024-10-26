/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emontes- <emontes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:36:33 by emontes-          #+#    #+#             */
/*   Updated: 2024/09/06 11:34:49 by emontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
    int     num;
    int     index;
    struct  s_stack  *next;
    struct  s_stack  *prev;
}   t_stack;

void    ft_error(void);
t_stack *ft_process(int argc, char **argv);
t_stack *ft_sub_process(char **argv);
int     ft_checkdup(t_stack *a);
int     ft_checksorted(t_stack *a);
void	ft_add_back(t_stack **lst, t_stack *new);
t_stack *ft_lstlast_ps(t_stack *lst);
t_stack	*ft_stack_new(int content);
void    ft_freestr(char **lst);
void    ft_free(t_stack **lst);
void    ft_sort(t_stack **stack_a);
t_stack *ft_sort_b(t_stack **stack_a);
void    ft_sort_three(t_stack **stack_a);
int     ft_lst_size(t_stack *lst);
int     ft_min(t_stack *a);
int     ft_max(t_stack *a);
void    ft_sa(t_stack **a, int j);
void    ft_sb(t_stack **b, int j);
void    ft_ss(t_stack **a, t_stack **b, int j);
void    ft_pa(t_stack **stack_b, t_stack **stack_a, int j);
void    ft_pb(t_stack **stack_a, t_stack **stack_b, int j);
void    ft_ra(t_stack **a, int j);
void    ft_rb(t_stack **b, int j);
void    ft_rr(t_stack **a, t_stack **b, int j);
void	ft_rra(t_stack **a, int j);
void	ft_rrb(t_stack **b, int j);
void	ft_rrr(t_stack **a, t_stack **b, int j);

#endif
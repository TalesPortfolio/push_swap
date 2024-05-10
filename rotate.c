

#include "../push_swap.h"

void	rotate(t_lst **stack)
{
	t_lst	*lst;

	if (!(*stack) || !(*stack)->next)
		return ;
	lst = lst_last(*stack);
	lst->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	lst->next->prev = lst;
	lst->next->next = NULL;
}

void	do_ra(t_lst **stack)
{
	rotate(stack);
	ft_putstr_fd("ra\n",1);
}

void	do_rb(t_lst **stack)
{
	rotate(stack);
	ft_putstr_fd("rb\n",1);
}

void	do_rr(t_lst **a_stack, t_lst **b_stack)
{
	rotate(a_stack);
	rotate(b_stack);
	ft_putstr_fd("rr\n",1);
}

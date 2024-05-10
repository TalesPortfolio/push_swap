
#include "../push_swap.h"

static void	swap(t_lst **stack)
{
	int	index;
	int	content;

	if (!(*stack)->next)
		return ;
	content = (*stack)->next->content;
	index = (*stack)->next->index;
	(*stack)->next->content = (*stack)->content;
	(*stack)->next->index = (*stack)->index;
	(*stack)->content = content;
	(*stack)->index = index;
}

void	do_sa(t_lst **stack)
{
	swap(stack);
	ft_putstr_fd ("sa\n",1);
}

void	do_sb(t_lst **stack)
{
	swap(stack);
	ft_putstr_fd ("sb\n",1);
}

void	do_ss(t_lst **a_stack, t_lst **b_stack)
{
	swap(a_stack);
	swap(b_stack);
	ft_putstr_fd ("ss\n",1);
}

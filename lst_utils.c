
#include "../push_swap.h"


void	lst_addfront(t_lst **stack, t_lst *news)
{
	if (!stack || !news)
		return ;
	if (!(*stack))
	{
		*stack = news;
		(*stack)->prev = NULL;
		(*stack)->next = NULL;
		return ;
	}
	(*stack)->prev = news;
	news->next = *stack;
	*stack = news;
	news->prev = NULL;
}

void	lst_addback(t_lst **stack, t_lst *news)
{
	t_lst	*tmp;

	if (!stack || !news)
		return ;
	if (!(*stack))
	{
		*stack = news;
		(*stack)->prev = NULL;
		(*stack)->next = NULL;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = news;
	news->prev = tmp;
}

t_lst	*lst_new(int content)
{
	t_lst	*stack;

	stack = malloc(sizeof(t_lst));
	if (!stack)
		return (NULL);
	stack->content = content;
	stack->index = -1;
	stack->next = NULL;
	stack->prev = NULL;
	return (stack);
}

t_lst	*lst_last(t_lst *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}


#include "../push_swap.h"

void	free_split(char **split)
{
	if (split == NULL)
		return ;
	for (int i = 0; split[i] != NULL; i++)
	{
		free(split[i]);
	}
	free(split);
}
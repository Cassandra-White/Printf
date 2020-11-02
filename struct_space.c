#include "ft_printf.h"

t_space *start_space(void)
{
	t_space *space;

	space = malloc(sizeof(t_space));
	space->preci = 0;
	space->width = 0;
	return (space);
}

char *add_space(int info_width, char info_padding)
{
	char *space;
	if(!(space = malloc(sizeof(char) * (info_width + 1))))
		return (0);
	ft_memset(space, info_padding, info_width);
	space[info_width] = '\0';
	return (space);	
}

void free_space(t_space *space)
{
	if(space->preci)
		free(space->preci);
	if(space->width)
		free(space->width);
	free(space);
}

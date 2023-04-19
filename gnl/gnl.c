#include "gnl.h"

char *get_next_line(int fd)
{
	char *str = malloc(100000), *aux = str;
	while(read(fd,aux,1) > 0 && *aux++ != '\n')
	return(aux > str) ? (*aux = 0, str) : (free(str), NULL);
}
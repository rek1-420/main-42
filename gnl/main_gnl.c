#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int fd;
    int nbr_line;
	char *s;

    nbr_line = 5;

	// fd = 0;
	fd = open("test.txt", O_RDONLY);

///////////////////////// LIS nbr_line LIGNES /////////////////////////
    while (nbr_line > 0)
    {
        s = get_next_line(fd);
        printf("nl = %s", s);
        free(s);
        nbr_line--;
    }

///////////////////////// LIS TOUT LE FICHIER /////////////////////////
    // while ((s = get_next_line(fd)))
    // {
    //     printf("nl = %s", s);
    //     free(s);
    // }

	close(fd);
	return (0);
}
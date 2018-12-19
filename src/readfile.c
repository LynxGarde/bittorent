#include "bit.h"
#include <stddef.h>

char *read_file(char *path)
{
    FILE *fd;
    fd = fopen(path, "r");
    char *file = malloc(sizeof(char *) * 2048);

    if(fd == NULL)
    {
        printf("Impossible d'ouvrir le fichier\n");
        exit(1);
    }

    while(fread(file, 1024, 1024, fd))
    {
        printf("\t%s", file);
    }

    fclose(fd);
    return file;
}

#include "bit.h" 

int option_parser(int argc, char **argv)
{
    const struct option option_long[] =
    {
        {"pretty-print-torrent-file", 1, NULL, 'p'},
        {"mktorrent", 1, NULL, 'm'},
        {0, 0, 0, 0},
    };

    int opt = 0;
    int val = 1;
    int option_index = 0;
    char *test = NULL;
    char *buff = malloc(sizeof(char *));
    while ((opt = getopt_long(argc, argv,"p:m:",
                    option_long, &option_index)) != -1)
    {
        switch (opt)
        {
            case 'p':
                test = optarg;
                buff = read_file(test);
                break;
            case 'm':
                test = optarg;
                buff = read_file(test);
                break;
        }
    }
    free(buff);
    if (test)
        printf("%s\n",test);
    return val;
}

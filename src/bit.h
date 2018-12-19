#ifndef BIT_H
#define BIT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>

#include "bencode.h"

#define _BSD_SOURCE || _XOPEN_SOURCE >= 500
#define _GNU_SOURCE

char *read_file(char *path);
int option_parser(int argc, char **argv);

char *get_path(char *name);
void mktorrent(char *path);

#endif /* ! BIT_H */

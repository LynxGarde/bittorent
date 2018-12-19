#include "bit.h"

int main(int argc, char **argv)
{
    int val = 42;
    val = option_parser(argc, argv);
    return val;
}

#include "bencode.h"

int main (void)
{
    printf("%u\n", be_decode("42",4));
    return 1;
}

#include <assert.h>
#include <stdio.h>
#define SIZE_LIMIT 1024

void pre_check(size_t size)
{
    assert(size <= SIZE_LIMIT);
    fprintf(stderr, "assert");
}
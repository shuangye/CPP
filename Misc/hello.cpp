#include <stdio.h>

int main(int argc, char *argv[])
{
    char *buffer = "Hello之前";
    char array[16] = "Hello之前";
    printf("sizeof(*buffer) = %d\n", sizeof(*buffer));
    printf("sizeof(array) = %d\n", sizeof(array));
    printf("sizeof(*array) = %d\n", sizeof(*array));

    printf("%s. %s\n", buffer, array);

    return 0;
}


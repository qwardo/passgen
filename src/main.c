/*
This is the main program file.
The program generates a password of a given length.
*/

#include <stdlib.h>
#include <stdio.h>
#include "../include/password_generator.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("%s: bad usage. Usage: %s <length>\n", argv[0], argv[0]);
        return 1;
    }

    unsigned int password_length;

    if (argv[1][0] == '-' || sscanf(argv[1], "%d", &password_length) != 1)
    {
        puts("fatal: invalid length value");
        return 1;
    }
    else
    {
        char *password = generate_password(password_length);

        if (password == NULL)
        {
            puts("fatal: failed to allocate memory");
            return 1;
        }
        else
            puts(password);

        free(password);
    }

    return 0;
}

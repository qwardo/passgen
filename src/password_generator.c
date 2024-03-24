/*
This file contains a function for generating a password.
The password is generated using VALID_PASSWORD_CHARACTERS defined in the include/password_generator.h file.
*/

#include <stdlib.h>
#include <time.h>
#include "../include/password_generator.h"

char *generate_password(unsigned int password_length)
{
    char *password = (char*) malloc(sizeof(char) * (password_length + 1));

    if (password == NULL)
        return NULL;

    srand(time(NULL));

    for (unsigned int i = 0; i < password_length; ++i)
        password[i] = VALID_PASSWORD_CHARACTERS[rand() % VALID_PASSWORD_CHARACTERS_LENGTH];

    password[password_length] = '\0';
    return password;
}

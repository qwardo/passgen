/*
This file contains the data used in password generation.
*/

#include <string.h>

#define VALID_PASSWORD_CHARACTERS "`~1!2@3#4$5%6^7&8*9(0)-_=+qQwWeErRtTyYuUiIoOpP[{]}\\|aAsSdDfFgGhHjJkKlL;:'\"zZxXcCvVbBnNmM,<.>/?"
#define VALID_PASSWORD_CHARACTERS_LENGTH strlen(VALID_PASSWORD_CHARACTERS)

char *generate_password(unsigned int password_length);

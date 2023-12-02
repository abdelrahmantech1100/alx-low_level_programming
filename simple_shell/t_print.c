#include "shell.h"

void t_print(const char *message) {
    write(STDOUT_FILENO, message, strlen(message));
}

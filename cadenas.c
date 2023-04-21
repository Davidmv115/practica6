#include <stdio.h>
#include "cadenas.h"
#include <string.h>

int buscar(char c, char *cadena) {
    char *pos = strchr(cadena, c);
    if (pos == NULL) {
        return -1;
    }
    return (int)(pos - cadena);
}

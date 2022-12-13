#include "objectif.h"

char *strdup(const char * s)
{
    char * m;
    m = malloc(sizeof(char) *stu_strlen(s));
    stu_strcpy(m, s);
    return (m);
}

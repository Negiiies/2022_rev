#include "objectif.h"

char *stu_strcat(char *dest, const char *src)
{
    int i;
    int size;

    i = 0;
    size = stu_strlen(dest);
    while(src[i] != '\0'){
            dest[size] = src[i];
            i += 1;
            size += 1;
    }
    dest[size] = 0;
    return(dest);
}

#include "objectif.h"
#include <stdio.h>

char *rev(char *buffer)
{
    int i;
    int j;
    char *k;
    int a;

    a = 0;
    i = 0;
    j = 0;
    k = malloc(sizeof(char) * 32);
    while(buffer[j] != '\0') {
        while (buffer[i] != '\n'){
            i += 1;
        }
        k[i] = '\n';
        a = i + 1;
        while(buffer[j] != '\n'){
            k[j] = buffer[i - 1];
            j += 1;
            i -= 1;
        }
        i = a;
        j += 1;
    }
    write(1, k, stu_strlen(k));
    write(1,"\n",1);
    free(k);
    return(0);
}

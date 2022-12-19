/*
 * E89 Pedagogical & Technical Lab
 * project:     reverse
 * created on:  2022-12-19 - 16:44 +0100
 * 1st author:  dylan.le - dylan.le
 * description: rev
 */

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
        while (buffer[i] != '\n' && buffer[i] != '\0') {
            i += 1;
        }
        k[i] = '\n';
        a = i + 1;
        while(buffer[j] != '\n' && buffer[j] != '\0') {
            k[j] = buffer[i - 1];
            j += 1;
            i -= 1;
        }
        i = a;
        j += 1;
    }
    write(1, k, stu_strlen(k));
    free(k);
    return(0);
}

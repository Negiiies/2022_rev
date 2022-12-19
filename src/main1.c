/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-12-19 - 16:28 +0100
 * 1st author:  dylan.le - dylan.le
 * description: ok
 */

#include "objectif.h"

int main(void)
{
    char *buffer;
    int size_read;

    buffer = malloc(sizeof(char) * 32);
    if (!buffer) {
        return (0);
    }
    size_read = read(0, buffer, 31);
    if (size_read == -1) {
        return (0);
    }
    rev(buffer);
    free(buffer);
}

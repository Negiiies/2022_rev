/*
 * E89 Pedagogical & Technical Lab
 * project:     strcpy
 * created on:  2022-12-19 - 16:42 +0100
 * 1st author:  dylan.le - dylan.le
 * description: rev
 */

char *stu_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while(dest[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    return(dest);
}

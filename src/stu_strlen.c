/*
 * E89 Pedagogical & Technical Lab
 * project:     strlen
 * created on:  2022-12-19 - 16:41 +0100
 * 1st author:  dylan.le - dylan.le
 * description: rev
 */

unsigned int stu_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != ('\0'))
        i += 1;
    {
        return (i);
    }
}

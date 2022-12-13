#include <unistd.h>
#include <stdlib.h>
#include "objectif.h"

#include <stdio.h>

int main(void)
{
    int size_read;
    char *stck_1;
    char *stck_2;
    char *buffer;

    size_read = 0;
    stck_1 = malloc(sizeof(char) * 2);
    stck_2 = malloc(sizeof(char) * 2);
    buffer = malloc(sizeof(char) * 2);
    size_read = read(0 , buffer, 2);
    stu_strcpy(stck_2, buffer);
    while(size_read != '\0'){
        size_read = read(0 , buffer, 2);
        stck_1 = malloc(sizeof(char) * (stu_strlen(stck_2) +
                                        stu_strlen(buffer)));
        stu_strcpy(stck_1, stck_2);
        stu_strcat(stck_1, buffer);
        stck_2 = strdup(stck_1);
    }
    write (1, buffer, stu_strlen(buffer));
    printf("zob: %s\n", stck_1);
    free(buffer);
    free(stck_1);
    free(stck_2);
}

/*
  char *cat = malloc(sizeof(char) *2);
  cat[0] = 'T';
  cat[1] = 'e';
  cat[2] = 's';
  cat[3] = 't';
  cat[4] = 0;
  if (!buffer){
  return (0);
  }
  int size_read = read(0, buffer, 31);
    if (size_read == -1){
    return (0);
    }*/
//rev(buffer);
//stu_strcat(buffer, cat);

char *stu_strcpy(char *dest, const char *src){
    int i;

    i = 0;
    while(dest[i] != '\0'){
        dest[i] = src[i];
        i += 1;
    }
    return(dest);
}

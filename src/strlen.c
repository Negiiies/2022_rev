unsigned int stu_strlen(const char *str){
    int i;
    i = 0;
    while(str[i] != '\0'){
        i += 1;
    }
    return(i);
}

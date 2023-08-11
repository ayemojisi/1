#include <stdlib.h>
#include <stdio.h>
char *ft_strdup(char *src)
{
    int i = 0;

    while(src[i])
    i++;
    char *res = malloc(sizeof(char) * (i + 1));
    if(!res)
        return(NULL);
    i = 0;
    while(src[i])
    {
        res[i] = src[i];
        i++; 
    }
    res[i] = '\0';
    return(res);
}

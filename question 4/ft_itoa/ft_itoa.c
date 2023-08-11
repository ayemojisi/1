#include <stdlib.h>

int eksi(int n)
{
    if(n < 0)
        return(-n);
    return(n);
}
int len(int n)
{
    int len = 0;
    if(n <= 0)
    len++;
    while(n)
    {
        n /= 10;
        len++;
    }
    return(len);
}
char	*ft_itoa(int nbr)
{
    int size = len(nbr);
    char *res = malloc(sizeof(char) * (size + 1));
    res[size] = '\0';
    if(nbr < 0)
        res[0] = '-';
    if(nbr == 0)
    {
        res[0] = '0';
        return(res);   
    }
    while(nbr)
    {
        res[--size] = eksi(nbr % 10) + ('0');
        nbr /= 10;
    }
    return(res);
}

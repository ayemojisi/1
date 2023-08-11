#include <unistd.h>
void put(int n)
{
    char str[] = "0123456789abcdef";
    if(n >= 16)
        put(n / 16);
    write(1, &str[n % 16], 1);
}
int ft(char *str)
{
    int i = 0;
    int toplam = 0;

    while(str[i])
    {
        toplam = toplam * 10 + str[i] - '0';
        i++;
    }
    return(toplam);
    
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int a = ft(av[1]);
        put(a);
    }
    write(1, "\n", 1);
}
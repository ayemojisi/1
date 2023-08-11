#include <unistd.h>
#include <stdio.h>
void mal(int n)
{
    char str[5000];
    int i = 0;
    int a = n;
    while(a)
    {
        a /= 10;
        i++;
    }
    str[i] = '\0';
    i--;
    while(n && i >= 0)
    {
        str[i--] = (n % 10) + '0';
        n /= 10;
    }
    i++;
    while(str[i])
    {
        write(1, &str[i++], 1);
    }
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int sayim = 0;
        int toplam = 0;
        int i = 0;
        int say = 1;
        while(av[1][i])
            sayim = (sayim * 10) + av[1][i++] - 48; // int 12
        i = 0;
        while(say < 10)
        {
            mal(say);
            write(1, " x ", 3);
            while(av[1][i])
                write(1, &av[1][i++], 1);
            write(1, " = ", 3);
            i = 0;
            toplam += sayim;
            mal(toplam);
            write(1, "\n", 1);
            say++;
        }
    }
    write(1, "\n", 1);  
}
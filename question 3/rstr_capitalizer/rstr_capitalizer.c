#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int b = 1;
    if(ac > 1)
    {
        while(av[b])
        {
            while(av[b][i])
            {
                while(av[b][i] != ' ' && av[b][i])
                {
                    if(av[b][i] >= 'A' && av[b][i] <= 'Z')
                        av[b][i] +=32;
                    if((av[b][i + 1] == ' ' || av[b][i + 1] == '\0') && (av[b][i] >= 'a' && av[b][i]  <='z')) 
                        av[b][i] -=32;
                    write(1, &av[b][i], 1);
                    i++;
                }
                if(av[b][i] == ' ')
                {
                    write(1, &av[b][i], 1);
                    i++;
                }
            }
            b++;
            i = 0;
            if(av[b])
                write(1,"\n", 1);
        }
    }
    write(1,"\n", 1);
}
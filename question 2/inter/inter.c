#include <unistd.h>

int main(int ac ,char **av)
{
    int alpha[128] = {0};
    int i = 0;
    int k = 0;

    if(ac == 3)
    {
        while(av[1][i])
        {
            while(av[2][k])
            {
                if(av[1][i] == av[2][k])
                {
                    if(alpha[av[1][i]] == 0)
                    {
                        write(1, &av[1][i], 1);
                        alpha[av[1][i]] = 1;
                    }
                }
                k++;
            }
            i++;
            k = 0;            
        }
    }
    write(1, "\n", 1);
}
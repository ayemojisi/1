#include <unistd.h>
void    ft(int n)
{
    char str[] = "0123456789";
    if(n > 10)
        ft(n / 10);
    write(1, &str[n % 10], 1);
}

int main()
{
    int i = 1;
    while(i < 101)
    {
        if(i % 3 == 0 && i % 5 == 0)
          write(1, "fizzbuzz\n", 9);
         else if(i % 3 == 0 )
            write(1, "fizz\n", 5);
        else if(i % 5 == 0)
             write(1, "buzz\n", 5);
        else
        {
            ft(i);
            write(1, "\n", 1);
        }
        i++;
    }
}
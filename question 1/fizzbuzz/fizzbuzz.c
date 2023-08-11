#include <unistd.h>
void mal(int n)
{
    int i = 0;
    int a = n;
    char str[4];
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
    i = 0;
    while(str[i])
        write(1, &str[i++], 1);
    write(1, "\n", 1);
}

int main()
{
    int i = 1;

    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if(i % 3 == 0)
            write(1, "fizz\n", 5);
        else if(i % 5 == 0)
            write(1, "buzz\n", 5);
        else
                mal(i);
        i++;
    }

}
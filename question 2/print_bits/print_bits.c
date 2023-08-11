#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int n)
{
	write(1, &"01"[n % 10], 1);
}

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = (octet >> i & 1 + '0');
		ft_putnbr(bit);
	}
}

int main(void)
{
	print_bits(1);
	printf("\n");
	print_bits(2);
	printf("\n");
	print_bits(3);
}

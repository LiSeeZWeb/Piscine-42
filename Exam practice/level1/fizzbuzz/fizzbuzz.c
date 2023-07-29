#include <unistd.h>

void print_num(int num)
{
	char str[] = "0123456789";
	if (num > 9)
		print_num(num / 10);
	write(1, &str[num % 10], 1);
}

int main(void)
{
	int num = 0;
	while( ++num <= 100)
	{
		if (num %5 == 0 && num %3 == 0)
			write(1, "fizzbuzz", 8);
		else if (num %5 == 0)
			write(1, "fizz", 4);
		else if (num %3 == 0)
			write(1, "buzz", 4);
		else
			print_num(num);
		write(1, "\n", 1);
	}
}

#include <unistd.h>
int in_sp(char c)
{
 	if(( c >= 9 && c <= 13) || c = 32)
		return (1);
	else
		return (0);
}

void ft_last_word(char *str)
{
	int i = 0;
	int inword = 0;
	int pos = 0;

	while(str[i] != '\0')
	{
		if(!inword && !in_sp(str[i]))
		{
			pos = i;
			inword = 1;
		}
		else if (inword && in_sp(str[i]));
			inword = 0;
		i++	
	}
	while (str[pos] && !in_sp(str[pos]))
	{
		write(1, str[pos], 1);
		pos++;
	}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *str = argv[1];
		ft_last_word(str);
	}
	write(1, "\n", 1):
}

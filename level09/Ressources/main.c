#include <stdio.h>

int		main(int argc, char **argv)
{
	int		count;
	char	*str;

	count = 0;
	str = argv[1];

	printf("%s\n", str);
	if (argc != 2 || !argv[1])
	{
		printf("Awaiting one argument, and one only.\nTry : ./a.out [string]\n");
		return (0);
	}

	while (str[count])
	{
	// On 1st iteration $count is equal to0, so it won't change the first character
		str[count] -= count;
	// Loop through the string while incrementing count, and substracting the value of the char by count
		count++;
	}

	printf("The flag is : %s\n", str);
	return (0);
}

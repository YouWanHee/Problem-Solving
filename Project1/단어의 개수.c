#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char str[1000001];
	gets(str);
	char *ptr = strtok(str, " ");
	while (ptr != NULL)
	{
		i++;
		ptr = strtok(NULL, " ");
	}
	printf("%d", i);
	return 0;
}
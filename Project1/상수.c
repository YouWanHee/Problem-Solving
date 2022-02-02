#include <stdio.h>
#include <string.h>

int main()
{
	char str1[4], str2[4];
	scanf("%s %s", &str1, &str2);
	char replace_str;
	replace_str = str1[0];
	str1[0] = str1[2];
	str1[2] = replace_str;
	replace_str = str2[0];
	str2[0] = str2[2];
	str2[2] = replace_str;

	int num1 = atoi(str1);
	int num2 = atoi(str2);

	if (num1 >= num2)
		printf("%d", num1);
	else
		printf("%d", num2);
	return 0;
}

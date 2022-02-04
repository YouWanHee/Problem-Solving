#include <stdio.h>
#include <string.h>

int main()
{
	char str[16];
	scanf("%s", str);
	int i, arr[16];
	i = 0;
	while (str[i] != NULL)
	{
		arr[i] = str[i] - 'A';
		i++;
	}
	int share, ans = 0;
	for (int j = 0; j < i; j++)
	{
		if (arr[j] >= 16 && arr[j] <= 19)
			ans += 8;
		else if (arr[j] >= 20 && arr[j] <= 22)
			ans += 9;
		else if (arr[j] >= 23 && arr[j] <= 26)
			ans += 10;
		else
		{
			share = arr[j] / 3;
			ans += share + 3;
		}
	}
	printf("%d", ans);
	return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	scanf("%s", str);
	int i = 0;
	int ans = 0;
	while (str[i] != NULL)
	{
		if (str[i] == 'c')
		{
			if (str[i + 1] == '=')
			{
				ans++; 
				i += 2;
			}
			else if (str[i + 1] == '-')
			{
				ans++;
				i += 2;
			}
			else
			{
				ans++; 
				i++;
			}
		}
		else if (str[i] == 'd')
		{
			if (str[i + 1] == 'z')
			{
				if (str[i + 2] == '=')
				{
					ans++;
					i += 3;
				}
				else
				{
					ans += 2;
					i += 2;
				}
			}
			else if (str[i + 1] == '-')
			{
				ans++;
				i += 2;
			}
			else
			{
				ans++;
				i++;
			}
		}
		else if (str[i] == 'l')
		{
			if (str[i + 1] == 'j')
			{
				ans++;
				i += 2;
			}
			else
			{
				ans++;
				i++;
			}
		}
		else if (str[i] == 'n')
		{
			if (str[i + 1] == 'j')
			{
				ans++;
				i += 2;
			}
			else
			{
				ans++;
				i++;
			}
		}
		else if (str[i] == 's')
		{
			if (str[i + 1] == '=')
			{
				ans++;
				i += 2;
			}
			else
			{
				ans++;
				i++;
			}
		}
		else if (str[i] == 'z')
		{
			if (str[i + 1] == '=')
			{
				ans++;
				i += 2;
			}
			else
			{
				ans++;
				i++;
			}
		}
		else
		{
			ans++;
			i++;
		}
	}
	printf("%d", ans);
	return 0;
}
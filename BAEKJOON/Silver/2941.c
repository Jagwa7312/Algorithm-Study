#include <stdio.h>

int main()
{
	int i, cnt = 0;
	char str[100];

	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'c' && str[i + 1] == '=') cnt++, i++;
		else if (str[i] == 'c' && str[i + 1] == '-') cnt++, i++;
		else if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') cnt++, i += 2;
		else if (str[i] == 'd' && str[i + 1] == '-') cnt++, i++;
		else if (str[i] == 'l' && str[i + 1] == 'j') cnt++, i++;
		else if (str[i] == 'n' && str[i + 1] == 'j') cnt++, i++;
		else if (str[i] == 's' && str[i + 1] == '=') cnt++, i++;
		else if (str[i] == 'z' && str[i + 1] == '=') cnt++, i++;
		else cnt++;
	}
	printf("%d", cnt);

	return 0;
}
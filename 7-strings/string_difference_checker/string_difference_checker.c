#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20];
	char str2[20], temp;
	int flag = 0, i = 0, j = 0;

	puts("Enter a sentence: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strcspn(str1, "\n")] = '\0';

	while (str1[i] != '\0' && str2[i] != '\0')
	{
		puts("Enter another sentence: ");
		fgets(str2, sizeof(str2), stdin);
		str2[strcspn(str2, "\n")] = '\0';

		flag = 0;
		j = 0;

		while (str1[j] != '\0' && str2[j] != '\0')
		{
			if (str1[j] != str2[j])
				flag++;
			j++;
		}

		for (j = 0; j < sizeof(str1) - 1; j++)
		{
			temp = str1[j];
			str1[j] = str2[j];
			str2[j] = temp;
		}

		if (flag >= 2)
			break;
		else if (flag == 1)
			printf("There is one different letter. You can continue!\n");
		else
			printf("There are no different letters. You can continue.\n");
		i++;
	}

	printf("There are %d different letters.\n", flag);
	printf("Program ended.");

	return 0;
}
#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 500
int main()
{
	int i = 0, k, m, n, l;
	char  str1[N], str2[N];
	printf("This is decryption program!\n");
	printf("Please input ciphertext:\n");
	gets(str2);
	printf("Please input the key:\n");
	scanf("%d", &k);
	printf("The ciphertext is '%s',\n\n-----------\nThe text is:\n", str2);
	m = strlen(str2);
	for (i = 0; i<m; i++)
	{
		n = (int)str2[i];
		if (str2[i] == ' ')
		{
			printf(" ");
		}
		else if (n>96 && n<123)
		{
			n = (n - 97 - k) % 26;
			if (n<0)
				n = 26 + n;
			l = (char)(n + 97);
			printf("%c", l);
		}
		else if (n>64 && n<91)
		{
			n = (n - 65 - k) % 26;
			if (n<0)
				n = 26 + n;
			l = (char)(n + 97);
			printf("%c", l);
		}
	}
	str2[i] = '\0';
	getch();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	/*int i = 0;
//	int j = 0;
//	int k[10] = { 0 };
//
//	for (i = 1; i < 10; i++)
//	{
//		k[i] = 2 * i + 3;
//		for (j = 1; j <= i; j++)
//			printf("%d ", k[j]);
//		printf("\n");
//	}*/
//	int i = 0;
//	int j = 0;
//	char ch = '$';
//	for (i = 1; i < 5; i++)
//	{
//		for (j = 1; j < 9; j++)
//			printf("%c", ch);
//		   j++;
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	/*char ch = 0;
//	scanf("%c", &ch);
//	while (ch != 'g')
//	{
//		printf("%c", ch);
//			scanf("%c", &ch);
//			
//	}*/
//	/*char ch = 0;
//	scanf("%c", &ch);
//	while (ch != 'g')
//	{
//		printf("%c", ++ch);
//		scanf("%c", &ch);
//			
//
//	}*/
//	/*char ch = 0;
//	/*do
//	{
//		scanf("%c", &ch);
//		printf("%c", ch);
//
//	} while (ch != 'g');*/
//	//char ch = 0;
//	//scanf("%c,", &ch);
//	//for (ch = '$'; ch != 'g'; scanf("%c,", &ch))
//		//printf("%c", ch);
//	int k = 0;
//	for (k = 1, printf("%d: Hi!", k); k * k < 26; k+=2)
//	{
//		printf("k=%d\n", k);
//		printf("k is %d in the loop.\n", k);
//		printf("Now k is %d in the loop.\n", k);
//	}
//	return 0;
//}
//int main()
//{
	/*int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
			printf("$");
		printf("\n");
	}*/
	
	
	
	/*for (i = 0; i < 6; i++)
	{
		char ch = 'F';
		for (j = 0; j <= i; j++)
			printf("%c", ch--);
		printf("\n");
	}*/
	/*char ch = 'A';
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%c", ch++);
		printf("\n");
	}*/
	/*int d = 0;
	int b = 0;
	int i = 0;
	char ch = 0;
	printf("Please input monogram:");
	scanf("%c", &ch);
	for (i = 0; i < 5; i++)
	{
		int j;
		
		for (j = 0; j < k; j++)
		{
			printf(" ");
		}
		int a = 0;
		char ch2 = ch;
		for (a = 0; a <=b; a++)
		{
			printf("%c", ch2++);
		}
		int c = 0;
		
		char ch1 = ch + (d - 1);
		for (c = 0; c < d; c++)
		{
			printf("%c", ch1--);
		}
		printf("\n");
		k--;
		b++;
		d++;
	}
	return 0;
}*/
//int main()
//{
//	/*char alphabet[26];
//	int i;
//	char ch = 'a';
//	for (i = 0; i < 26; i++, ch++)
//	{
//		alphabet[i] = ch;
//	}
//	for (i = 0; i < 26; i++)
//	{
//		printf("%c ", alphabet[i]);
//	}*/
//	int i, j;
//	char ch;
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0, ch = 'F'; j <= i; j++, ch--)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i, j, num;
//	char ch;
//	printf("Enter the core char you want to print(a....z);");
//	scanf("%c", &ch);
//	char ch1 = 'A';
//	num = ch - 'A' + 1;//输入最后字母与第一个字母相差加一为要循环的次数
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 0; j < num - i; j++)
//			printf(" ");
//		for (ch1 = 'A'; j < num; ch1++, j++)
//			printf("%c", ch1);
//		for (j = 1, ch1 -= 2; j < i; j++)
//			printf("%c", ch1--);
//		printf("\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//int d = 0;
//int b = 0;
//int i = 0;
//char ch = 0;
//printf("Please input monogram:");
//scanf("%c", &ch);
//for (i = 0; i < 5; i++)
//{
//	int j;
//
//	for (j = 0; j < k; j++)
//		printf(" ");
//	int a = 0;
//	char ch2 = ch;
//	for (a = 0; a <= b; a++)
//		printf("%c", ch2++);
//	int c = 0;
//	char ch1 = ch + (d - 1);
//	for (c = 0; c < d; c++)
//		printf("%c", ch1--);
//	printf("\n");
//	k--;
//	b++;
//	d++;
//}
//return 0;
//}
//int main()
//{
//	int i, j, num;
//	char ch;
//	char ch1;
//	printf("Enter the core char (A....Z）：");
//	scanf("%c", &ch);
//	num = ch - 'A' + 1;
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 0; j < num - i; j++)
//			printf(" ");
//		for (ch1 = 'A', j = 0; j < i; j++)//for(ch1='A;j<num;j++)
//			printf("%c", ch1++);
//		for (j = 1, ch1 -= 2; j < i; j++)
//			printf("%c", ch1--);
//		printf("\n");
//	}
//	return 0;
//}
#define n 5
int main()
{
	int i, j, k;
	int s[n] = { 0 };
	for (i = 0; i < n; i++)
		scanf("%d", &s[i]);
	for (i = 0; i < n; i++)
	{
		k = s[i];
		printf("%-3d    %-3d    %-3d", k, k * k, k * k * k);
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char B[26];
	char s[26];
	char y='a';
	int i;

	B[0] = 'A'; B[1] = 'B'; B[2] = 'C'; B[3] = 'D'; B[4] = 'E'; B[5] = 'F';
	B[6] = 'G'; B[7] = 'H'; B[8] = 'I'; B[9] = 'J'; B[10] = 'K'; B[11] = 'L';
	B[12] = 'M'; B[13] = 'N'; B[14] = 'O'; B[15] = 'P'; B[16] = 'Q'; B[17] = 'R';
	B[18] = 'S'; B[19] = 'T'; B[20] = 'U'; B[21] = 'V'; B[22] = 'W'; B[23] = 'X';
	B[24] = 'Y'; B[25] = 'Z';

	s[0] = 'a'; s[1] = 'b'; s[2] = 'c'; s[3] = 'd'; s[4] = 'e'; s[5] = 'f';
	s[6] = 'g'; s[7] = 'h'; s[8] = 'i'; s[9] = 'j'; s[10] = 'k'; s[11] = 'l';
	s[12] = 'm'; s[13] = 'n'; s[14] = 'o'; s[15] = 'p'; s[16] = 'q'; s[17] = 'r';
	s[18] = 's'; s[19] = 't'; s[20] = 'u'; s[21] = 'v'; s[22] = 'w'; s[23] = 'x';
	s[24] = 'y'; s[25] = 'z';

	printf("Enter the character:");
	scanf_s("%c", &y);
	for (i = 0; i <= 26; i++)
	{
		if (y == B[i]) printf("\t%c", s[i]);
		if (y == s[i]) printf("\t%c", B[i]);
	}
	system("pause");
	return 0;
}
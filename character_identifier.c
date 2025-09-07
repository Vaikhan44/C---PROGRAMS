#include <stdio.h>

int main()
{
	char ch;
	printf("enter any single character :");
	scanf("%c",&ch);
	if (ch >= 'A' && ch <= 'Z')
	{
		printf("entered character is a capital letter");
	}
	else if (ch >='a' && ch<='z')
	{
		printf("entered character is a small case letter");
		
	}
	else if(ch >= '0' && ch <= '9')
	{
		printf("entered character is a digit");
	}
	else
	{
		printf("this is a special character");
	}
}

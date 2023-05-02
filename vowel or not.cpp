#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the charecter\n");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
	switch(ch){
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			printf("%c is a vowel",ch);
			break;
			default:
			printf("%c is a consonent",ch);
			break;
		}
	}
	else
	{
		printf("%c is not an alphabet",ch);
	}
	return 0;
}

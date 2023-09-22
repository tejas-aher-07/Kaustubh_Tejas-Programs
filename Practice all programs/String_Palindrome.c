#include<stdio.h>
#include<string.h>

int palindrome (char*);
int main()
{
	char s1[]="DAD";
	char s2[]="MOM";
	char s3[]="NITIN";
	
	int n= palindrome(s1);	
	if(n)
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not palindrome");
	}
	
	
	return 0;
}

int palindrome (char *str)
{
	int i,j;
	for(i=0,j=strlen(str)-1;j>=0;i++,j--)
	{
		if(str[i]!=str[j])
		{
		   return 0;
			
		}
		
	}
	return 1;
}

#include<stdio.h>
void main(){
	char s[30];
	int i=0;
	printf("enter uppercase string");
	scanf("%s",&s);
	while(s[i]!='\0')
	{
		s[i]=s[i]+32;
		i++;
	
	}
	printf("string is =%s",s);
	}

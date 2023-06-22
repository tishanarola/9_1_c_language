#include<stdio.h>
void main(){
	char str[100];
	int i;
	printf("enter string:");
	gets(str);
	printf("my name is tishanarola is %s",str);
	for(i=0;str!=NULL;i++){
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
			
		}
		else if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]+32;
			
		}
	}
	printf("\nthe toggle case string is %s",str);
	
}

#include<stdio.h>
void main()
{
	char name[10],i;
	printf("enter any name ");
	scanf("%s",name);
	
	for(i=0;i<=10;i++)
	{
		printf("%c",name[i]);
	}
}
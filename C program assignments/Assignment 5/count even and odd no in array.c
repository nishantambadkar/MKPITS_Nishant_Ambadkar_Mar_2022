#include<stdio.h>
void main()
{
	int a[10], i, even=0,odd=0;
	printf("enter 10 array elements");
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		even=even+1;
		else
		odd=odd+1;
	}
	printf("even no are %d and odd no are %d",even,odd);
}
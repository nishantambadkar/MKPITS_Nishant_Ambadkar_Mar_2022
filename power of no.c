#include<stdio.h>
void main()
{
	int x,y, i, pow=1;
	printf("enter x and y value");
	scanf("%d %d", &x, &y);
	i=1;
	while (i<=y)
	{
		pow=pow*x;
		i++;
	}
	printf("power of given no is %d",pow);
}
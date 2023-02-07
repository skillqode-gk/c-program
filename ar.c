// function passed Array
#include <stdio.h>
#define n 5
void DisArray(int a[])
{
	// int i;
	for (int i = 0; i < n; i++)
	{
		printf("\t%d",a[i]);
	}
}
int main()
{
	int a[n],i;
	for ( i = 0; i < n; i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	DisArray(a);		// array as argument
	
}
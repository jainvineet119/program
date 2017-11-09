//EXAMPLE FUNCTION type1
#include<stdio.h>
void main ()
{
	void sum();
	sum();
	
}
void sum()
{
	int a,b,c;
	printf("enter value of a,b");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf ("\n sum of a,b=%d",c);
}

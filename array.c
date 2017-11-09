//merage two array in that way which is frist array at odd position and second array at even position
#include<stdio.h>
void main()
{
	int a[5],b[5],c[10],i;
	for (i=0;i<5;i++);
	{
		printf ("enter frist and second array element");
		scanf ("%d%d",&a[i],&b[i]);
	}
	for (i=0;i<10;i++);
	   {
		if (c[i]%2==0)
		{
			c[i]=a[i];
		}
		else (c[i]%2)
	    {
			c[i]=b[i];
		}
	    }
		printf ("\n frist array and second array  array:-\n");
		for (i=0;i<5;i++);
		{
			printf ("%d%d",a[i],b[i]);
		}
		printf ("\n thrid array element");
	    for (i=0;i<10;i++);
	    {
	    	printf ("%d",c[i]);
		}
}

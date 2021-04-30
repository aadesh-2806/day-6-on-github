#include<stdio.h>

void main()
{
	char a[100],b[100];
	int i,n,m,j,l;
	
	printf("hello\nenter string=");
	gets(a);

	printf("\nenter char.=");
	gets(b);
	
	i=0;
	while(a[i]!=0)
	{
		i++;
	}
	n=i;

	i=0;
	while(i<n)
	{
		if(b[0]==a[i])
		{
				printf("it is present on no.%d\n",i);
				
		}
		i++;
	}
	
	
	getch();
	
}

#include<stdio.h>

void main()
{
	char a[100],b[110];
	int i,n,m,t,l;
	
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
	m=0;
	while(i<n)
	{
		if(b[0]==a[i])
		{
				m++;
		}
		i++;
	}
	printf("%d",m);
	
	getch();
	
}

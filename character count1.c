#include<stdio.h>

void main()
{
	char a[100],b;
	int i,n,m,t,l;
	
	printf("hello\nenter string=");
	gets(a);

	printf("\nenter char.=");
	//getc(b);
	scanf("%c",&b);
	
	/*
	'a' == 'a'
	v1 == 'a'
	v1 == v2
	v1 == arr[i]
	arr1[i] == arr2[j]
	*/
	
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
		if(b==a[i])
		{
				m++;
		}
		i++;
	}
	printf("%d",m);
	
	getch();
	
}

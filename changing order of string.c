#include<stdio.h>
#include<conio.h>

int main()
{
	
	char a[200]; 
	int n,i;
	
	printf("welcome\nenter string= ");
	fflush(stdin);
	gets(a);

	i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	n=i;
	
	i=n-1;
	while(i>=0)
	{
		printf("%c",a[i]);
		i--;
	}
				
	getch();
}


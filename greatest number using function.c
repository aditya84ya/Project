#include<stdio.h>
int great(int,int);
void main ()
{
	int a,b,c;
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	c=great(a,b);
	printf("\ngreatest number= %d",c);
}
int great(int a,int b)
{	if(a>b)
			return(a);
			else
			return(b);
}
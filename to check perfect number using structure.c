#include<stdio.h>
void perfect(int n)
{
     int i=1,sum=0;
      while(i<n)
     {
          if(n%i==0)
               sum=sum+i;
          i++;
     }
     if(sum==n)
          printf("\n%d is a Perfect Number.",i);
     else
          printf("\n%d is NOT a Perfect Number",i);
}
int main()
{
     int a;
     printf("Enter Number : ");
     scanf("%d",&a);
     perfect(a);
     return 0;
}
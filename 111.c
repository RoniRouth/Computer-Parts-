#include<stdio.h>
#include<conio.h>
void main()
{
int i,n=1;
printf("prime numbers between to 100 are \n);
while(n<=100)
{
i=2;
while(i>n)
{
if(n%i==0)
   break;
   else
     i++;
     }
     if(i==n)
     printf("%d\t",n);
     n++;
     }
     getch();
     }
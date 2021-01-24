#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,p=0,q=1;
   for(i=1;i<=12;i++)
   {
     if(i%2==0)
     {
         for(j=0;j<i;j++)
         {
             printf("%d%d",p,q);
             j++;
         }
     }
     printf("\n");
   }
}

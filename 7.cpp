#include<stdio.h>
#include<math.h>

int main()
{
   int  i,j,k;
    for(i=1;i<=5;i++)
     { 
       for(j=1;j<=5;j++)
      {
       if(j<=6-i)
         printf("*");
       else
         printf(" ");
      }  
    for(k=1;k<=6;k++)
      {
        if(k<=i)
          printf(" ");
        else
          printf("*");
      } 
      printf("\n");
     }
   return 0;
}



#include<stdio.h>
#include<math.h>

int main()
{
   int  i,j,k;
    for(i=1;i<=5;i++)
     { 
       for(j=1;j<=5;j++)
      {
       if(j<=5-i)
         printf(" ");
       else
         printf("*");
      }  
    for(k=6;k<=9;k++)
      {
        if(k<=9-(5-i))
          printf("*");
        if(k<=9-(5-i))
          printf("");
      }
      printf("\n");
     }
   return 0;
}


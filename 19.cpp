#include<stdio.h>

int main()
{
    int j,i,k;
    for(i=0;i<=2;i++)
  { 
    for(j=0;j<=18;j++)
  {
    if((2-i<=j && j<=6+i ) || (12-i<=j && j<=16+i))
        printf("*");
    else 
        printf(" ");
    
  }
        printf("\n");
     
  }
   for(k=0;k<=9;k++)
     {
      for(j=0;j<=18;j++)
      {
         if(k==0)
        {
      for(j=0;j<=5;j++)
        printf("*");
          
       if(j==6)
          printf("MySirG");
      for(j=12;j<=18;j++)
         printf("*");
           break;
         }
        
         if(0+k<=j && j<=18-k)
            printf("*");
         else
          printf(" ");
      }
          printf("\n");
    }
     
}


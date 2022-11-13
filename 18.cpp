#include<stdio.h>

int main()
{
int j,i,k;
for(i=0;i<=4;i++)
{
for(j=0;j<=8;j++)
{
    if(4-i<=j && j<=4+i )
        printf("*");
        
    else
        printf(" ");

}
      printf("\n");
  
}
  for(k=0;k<=3;k++)
   {
      for(j=0;j<=8;j++)
      {
        if(1+k<=j && j<=7-k)
           printf("*");
        else
           printf(" ");
      }
    printf("\n");
   }
    
    return 0;
     
}


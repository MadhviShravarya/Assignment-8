#include<stdio.h>

int main()
{
int j,i;
int count=0;
for(i=0;i<=3;i++)
{
   count=0;
 
   for(j=0;j<(3-i);j++)

       printf(" ");
      
    for(j=0;j<=i;j++)
     
       printf("%d",++count);
     
      count--;
        while(count)
         {
         printf("%d",count--);
         }
     
     printf("\n");
 
 
}

}



#include<stdio.h>

int main()
{
int j,i;
for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
{
    if(j==(4-i) || j==4 || i==4)
        printf("*");
         
    else
        printf(" ");

}
      printf("\n");
}
}



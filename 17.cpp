#include<stdio.h>

int main()
{
int j,i;
for(i=0;i<=4;i++)
{
for(j=0;j<=8;j++)
{
    if(i==0 || j==(0+i) || j==(8-i))
        printf("*");
         
    else
        printf(" ");

}
      printf("\n");
}
}


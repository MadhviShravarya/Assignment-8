#include<stdio.h>

int main()
{
int j,i;
int ch=65;
for(i=0;i<=3;i++)
{
    ch=65;
   for(j=0;j<=i;j++)
      printf(" ");
   for(j=0; j<=(3-i); j++)
      printf("%c",ch++);
    ch--;
    while(ch>65)
     printf("%c",--ch);

     printf("\n");
 
 
}

}


#include<stdio.h>

int main()
{
int j,i;
int ch=65;
for(i=0;i<=6;i++)
{
      ch=65;
     for(j=0; j<=(6-i); j++)
        printf("%c",ch++);
     for(j=0;j<2*i-1;j++)
        printf(" ");
      if(i==0)
         ch--;
     while(ch>65)
        printf("%c",--ch);

        printf("\n");
 
 
}

}


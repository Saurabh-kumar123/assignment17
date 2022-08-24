#include<stdio.h>
int main()
{
     char str[20],i,j;
     printf("enter a string\n");
     gets(str);
     for(i=0;str[i];i++);
     for(j=i-1;j>=0;j--)
     printf("%c",str[j]);
     return 0;
}


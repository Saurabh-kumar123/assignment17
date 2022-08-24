#include<stdio.h>
int main()
{
     char str[20],i;
     printf("enter a small later string\n");
     gets(str);
     for(i=0;str[i];i++)
     printf("%c",str[i]-32);
     return 0;
}

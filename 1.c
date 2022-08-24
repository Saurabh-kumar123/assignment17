#include<stdio.h>
int main()
{
     char str[20],i;
     printf("enter a string\n");
     fgets(str,20,stdin);
     for(i=0;str[i];i++);
     printf("length of this string %d",--i);
     return 0;
}

#include<stdio.h>
int main()
{
     char str[20],s[20],i,j;
     printf("enter a string\n");
     gets(str);
     for(i=0;str[i];i++)
          s[i]=str[i];
          for(i=0;s[i];i++)
          printf("%c",s[i]);
     return 0;
}



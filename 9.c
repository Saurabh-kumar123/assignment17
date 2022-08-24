#include<stdio.h>
int main()
{
     char str[20],i,j,c;
     printf("enter a string\n");
     gets(str);
     for(i=0;str[i];i++)
          for(j=i+1;str[j];j++)
               if(str[i]>str[j])
          {
               c=str[i];
               str[i]=str[j];
               str[j]=c;
          }
          for(i=0;str[i];i++)
          printf("%c",str[i]);
     return 0;
}


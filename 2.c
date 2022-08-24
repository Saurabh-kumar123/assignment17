#include<stdio.h>
int main()
{
     char str[20],i,ch;
     int count=0;
     printf("enter a string\n");
     fgets(str,20,stdin);
     printf("enter a character\n");
     fflush(stdin);
     scanf("%c",&ch);
     for(i=0;str[i];i++)
          if(ch==str[i])
          count++;
     printf("%d",count);
     return 0;
}

#include<stdio.h>
int main()
{
     char str[20],i;
     int ch=0,dig=0,sp=0;
     printf("enter a string\n");
     gets(str);
     for(i=0;str[i];i++)
          if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
          ch++;
          else if(str[i]>='0'&&str[i]<='9')
               dig++;
          else
               sp++;
     printf("character is %d\ndigit is %d\nspecial character is %d",ch,dig,sp);
     return 0;
}



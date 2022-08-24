#include<stdio.h>
int main()
{
     char str[20],i;
     int count=0;
     printf("enter a string\n");
     fgets(str,20,stdin);
     for(i=0;str[i];i++)
          if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
          count++;
     printf("vowel is %d",count);
     return 0;
}

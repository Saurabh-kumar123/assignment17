#include<stdio.h>
int main()
{
     char str[20],i,j,c;
     int count=0;
     printf("enter a string\n");
     gets(str);
     for(i=0;str[i];i++)
     {
          for(j=0;j<=i;j++)
               if(str[i]==str[j])
             break;
             if(i==j)
             {
                for(j=0;str[j];j++)
                    if(str[i]==str[j])
                    count++;
          printf("%c -> %d\n",str[i],count);
          count=0;
             }
     }
     return 0;
}


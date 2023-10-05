#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],l;
    printf("enter the string:");
    scanf("%s",str);
     l=strlen(str);
     int i=0,j=l-1,temp=0;

     while(i<j)
     {
         temp=str[i];
         str[i]=str[j];
         str[j]=temp;
         i++;
         j--;
     }
     printf("%s",str);
}


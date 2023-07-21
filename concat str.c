#include<stdio.h>
#include<string.h>
void main()
{
    printf("Enter the string=");
    char ch[50];
    char s[50];
 //   char a[50];
    gets(ch);
    gets(s);
   // printf("the concated string is     %s",strcat(ch,s));
   int i=0;
   int j=0;
   int a=0;
   while(ch[a]!=0)
   {
       i++;
       a++;
   }

   while(s[j]!=0)
   {
       ch[i]=s[j];

       j++;
       i++;
   }
  printf("The string =:");
      printf("%s",ch);
   }





#include<stdio.h>
void main()
{
    char s[50];
    printf("Enter the string:");
    gets(s);
   //puts(s);
   int i=0;
   int a=0;
   int j=0;
   while(s[a]!='\0')
   {
       i++;
       a++;
   }
   printf("The reverse of the string is=");
   for(j=i-1;j>=0;j--)
   {
       printf("%c",s[j]);

   }

}

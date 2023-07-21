#include<stdio.h>
#include<string.h>
void main()

{
    char ch[50];
    char s[30];
    gets(ch);
    puts(ch);
    gets(s);
    puts(s);
    int i=0;
 /*  int c= strcmpi(ch,s);
    if(c==0)
    {
        printf("equal");
    }
    else
    {
        printf("unequal");

    }*/

    int a=0,j=0;
    while(ch[i]!='\0'||s[i]!='\0')
    {
        if(ch[i]==s[i])
        {

        i++;
        }
   else{
        a++;
        break;
    }
    }
    if(a==0)
    {
        printf("the strings are equal");

    }
    else
    {


        printf("not equal");
    }







}

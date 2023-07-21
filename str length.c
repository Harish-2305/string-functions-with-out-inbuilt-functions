#include<stdio.h>
void main()

{
    char s[50];
    printf("enter the string value:");
    scanf("%s",&s);
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    printf("The length of the string=%d",i);


}

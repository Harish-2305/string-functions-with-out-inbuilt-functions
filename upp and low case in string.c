#include<stdio.h>
int main()
{
    char a[30],asc;
    int i=0;
    printf("Enter the string=");
    scanf("%[^\n]s",a);
    while(a[i]!='\0')
    {
       //if(a[i]>=97&&a[i]<=122) //for upper case(97--122 lowercase range)
        if(a[i]>=65&&a[i]<=90) //(65--90 uppercase range)
       {
      // asc=(int)a[i]-32;//for uppercase
         asc=(int)a[i]+32;
       printf("%c",asc);
       i++;
       }
       else{
        printf("%c",a[i]);
        i++;
       }

    }
}

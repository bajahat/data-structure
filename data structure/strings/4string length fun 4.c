#include<stdio.h>
int stringlength(char x[])
{
    int i=0,count=0;
    while(x[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
main(){
 char name[20];
 int len;
 printf("enter your name\n");
 gets(name);
 len=stringlength(name);
 printf("length of string is %d",len);
}



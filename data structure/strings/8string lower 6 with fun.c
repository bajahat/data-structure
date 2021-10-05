#include<stdio.h>
#include<string.h>
lower1(char x[])
{
    int i=0;
    while(x[i]!='\0')
    {
        if(x[i]>='A'&& x[i]<='Z')
        {
            x[i]=x[i]+32;
        }
        i++;
    }
}
main(){
 char name[20];
 printf("enter your name\n");
 gets(name);
 printf("original string %s\n",name);
 lower1(name);
 printf("lower string %s\n",name);

}



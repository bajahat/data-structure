#include<stdio.h>
#include<string.h>
main(){
 char s1[20],s2[20],s3[50];
 printf("enter your first string\n");
 gets(s1);
 printf("enter your second string\n");
 gets(s2);
 strcat(s1,s2);
 printf("concatenation of two strings are %s",s1);

}

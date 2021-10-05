#include<stdio.h>
#include<string.h>
stringconcat(int l1,int l2,char s1[],char s2[]){
    int i;
for(i=0;i<=l2;i++){
 s1[l1+i] = s2[i];

}

}

main(){
 char s1[20],s2[20],s3[50];
 int l1,l2;
 printf("enter your first string\n");
 gets(s1);
 printf("enter your second string\n");
 gets(s2);
 l1=strlen(s1);
 l2=strlen(s2);
 stringconcat(l1,l2,s1,s2);
 printf(" string after concatenation is %s\n",s1);


}


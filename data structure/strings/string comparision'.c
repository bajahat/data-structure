//string comparision
#include<stdio.h>
main(){
 char s1[20],s2[20];

 int i,f=0;
 printf("enter first string\n");
 gets(s1);
 //scanf("%[^\n]s",s1);
 printf("enter second string\n",);
 gets(s2);
 for(i=0;s1[i]!='\0'||s2[i]!='\0';i++){
  if(s1[i]!= s2[i])
  {
      f=1;
      break;
  }
}
if(f==1)
printf("strings are not equal");
else
printf("strings are  equal");


}

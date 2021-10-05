main(){
 int l1,l2;
 char s1[]="data";
 char s2[]={"structure"};
 char s3[20];

 printf(" length of first string is %d\n",strlen(s1));
 printf(" length of second string is %d\n",strlen(s2));
 strcpy(s3, s2);
 printf(" copy of one string to another %s\n",s3);
 strrev(s1);
 printf(" string after reverse is %s\n",s1);
 strcat(s1, s2);
 printf(" string after concationation is %s\n",s1);
 if(strcmp(s1,s2))
 printf("strings are not equal");//returns 1 : if both strings are equal.
 else
 printf("strings are  equal");//returns 0 : if both strings are equal.

}

#include<stdio.h>
 int main()
 {
     int n,i;
     int x=0;
     char s[10];
     scanf("%d",&n);
     for(i=0;i<=n;i++){
         gets(s);
         if(s[1]=='+'){
             x=x+1;
         }else if(s[1]=='-'){
             x=x-1;
         }
         s[0]='\0';
         
     }
     printf("%d",x);
     
 }
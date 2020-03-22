#include<stdio.h>
#include<string.h>
 int main()
 {
     char a[100];
     int b,c;
     scanf("%d",&c);
     for(int i=0;i<=c;i++){
         gets(a);
         b=strlen(a);
         if(b<=10){
             puts(a);
         }
         else if(b>10){
             printf("%c",a[0]);
             printf("%d",b-2);
             printf("%c",a[b-1]);
             printf("\n");
             
         }
         
     }
     return 0;
     
 }
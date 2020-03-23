#include<stdio.h>
#include<string.h>
 int main()
 {
     int n,i=0,d=0;
     scanf("%d",&n);
     for(i=0;i<n;i++){
         int p=0,v=0,t=0;
         scanf("%d",&p);
         scanf("%d",&v);
         scanf("%d",&t);
         if(p==1&&v==1||p==1&&t==1||v==1&&t==1||v==1&&p==1){
             d=d+1;
         }
     }
     printf("%d",d);
 }
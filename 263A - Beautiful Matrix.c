#include<stdio.h>
 int main()
 {
     int mat,i,j,x=0,y=0;
     
     for(i=1;i<=5;i++){
         for(j=1;j<=5;j++){
             scanf("%d",&mat);
             if(mat==1){
                 printf("%d",abs(i-3)+abs(j-3));
             }
         }
     }
 
 }
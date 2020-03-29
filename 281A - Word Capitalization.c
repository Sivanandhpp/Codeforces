#include<stdio.h>
#include<string.h>
 void main()
 {
     char a[10000],i=0;
     gets(a);
     a[0]=toupper(a[0]);
     puts(a);
 }
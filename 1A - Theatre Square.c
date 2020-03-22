#include<stdio.h>
 int main()
 {
     long long int m=0,n=0,a=0,l=0,w=0,z=0;
     scanf("%lld",&n);
     scanf("%lld",&m);
     scanf("%lld",&a);
     l= n/a;
     w= m/a;
    
    if(n % a != 0) l++;
    if(m % a != 0) w++;
    printf("%lld",w*l);
     return 0;
 }
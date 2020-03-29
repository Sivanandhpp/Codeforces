#include <stdio.h>
#include <string.h>
 main() {
	char a[1000],b[]="aeiouyAEIOUY";
	int i,j,l;
	gets(a);
	l=strlen(a);
	for(i=0;i<=l;i++){
	    int d=2;
	    for(j=0;j<=12;j++){
	        if(a[i]==b[j]){
	            d=0;
	            break;
	        }else{
	            d=1;
	        }
	    }
	    if(d==1){
	        a[i]=tolower(a[i]);
	        printf(".%c",a[i]);
	    }
	}
	return 0;
}
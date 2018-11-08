#include <stdio.h>
#include <stdlib.h>

int main(void){

		long long i,j, k, num=1000000;

		long long * a;
    	a=(long long *)malloc(sizeof(long long)*1000001);
		int n=0;
		
		
		for(i=2;i<=num; i++)
				a[i-1]=i;

		for(i=2; i<=num; i++){
			
			if(a[i-1]==0) continue;
			
			// remove
				
			for(j=i+i; j<=num; j+=i){
				
				a[j-1]=0;
				
			}

			printf("%lld ", i);					
		

		}
		
		printf("\n");

}

#include <stdio.h>
#include <stdlib.h>


int main(void){

	int num, i;
	long long j, n; 
	long long s1,s2,s3;

	scanf("%d",&num);

	

	for(i=1;i<=num;i++){
		scanf("%lld", &n);
		s1=n*(n+1)/2;

		printf("#%d %lld %lld %lld\n",i,s1,s1*2-n,s1*2);
	}
}

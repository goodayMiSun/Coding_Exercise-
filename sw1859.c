#include <stdio.h>
#include<stdlib.h>

long long  gain(int day, long long  * mon){
	int i=0, n=0, a=0,j;
	long long  max=mon[0], sum=mon[0] ,max_sum=0, soon=0;
	do{
		j=n;
		max=mon[j];	
		for(i=j;i<day;i++){
			if(max<mon[i]){
				max=mon[i];
				n=i;	
			}
		}	
		for(i=j;i<n;i++){
			soon+=max-mon[i];
		}
		n++;
	}while(n<=day);
	return soon;
}

int main(){
	int number, day, i, j;
	long long* mon=NULL;
	long long* num=NULL;
	
	scanf("%d", &number);
	num=(long long*)malloc(sizeof(long long)*number);
	
	for(i=0;i<number;i++){	
		scanf("%d", &day);
		mon=(long long*)malloc(sizeof(long long)*day);

		for(j=0;j<day;j++){
			scanf("%lld",mon+j);
		}
		num[i]=gain(day, mon);	
		free(mon);
	}
	for(i=0;i<number;i++){
		printf("#%d %lld\n", i+1, num[i]);
	}
    return 0;
}

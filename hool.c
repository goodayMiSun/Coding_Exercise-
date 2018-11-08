#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i, num,j,a,b;
	int *answer=NULL;
	int *aw=NULL;

	scanf("%d", &num);
	
	answer=(int*)malloc(sizeof(int)*num);
	aw=(int*)malloc(sizeof(int)*num);
	
	for(i=0;i<num;i++){

		scanf("%d %d",&a,&b);

		for(j=0;j*2+b-j!=a ;j++);
			
		aw[i]=j;
		answer[i]=b-j;
		


	}


	for(i=0;i<num;i++){
		printf("#%d %d %d\n", i+1, answer[i], aw[i]);
	}
	return 0;
	}

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int n, i, j,k ,cm[3], area;
	int * bl=NULL;

	
	scanf("%d", &n);
	bl=(int*)malloc(sizeof(int)*n);// what time?
	
	for(j=0;j<n;j++){
		for(i=0;i<3;i++)
			scanf("%d", cm+i);
			
		if(cm[0]!=cm[1]){
			area=cm[0]*cm[1];
			bl[j]=area/cm[2];
		}
		else 
			bl[j]=cm[2];
		
	
		
	}


	for(j=0;j<n;j++)
		printf("#%d %d",j+1,bl[j]);
}

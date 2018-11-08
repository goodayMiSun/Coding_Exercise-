#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){

		char a[51]; 
		int* b=NULL;
		int i, j, k,n,num, count;

		scanf("%d",&n);

		for(i=0;i<n;i++){
				count=0;
				
				scanf("%s", a);
	
				num=strlen(a);
				
				b=(int*)malloc(sizeof(int)*num);

				for(j=0;j<num;j++){

						if((a[j]-48)!=b[j]){
								for(k=j;k<num;k++){
										b[k]=a[j]-48;
								}
								count++;
								
						}
				}
		
				printf("#%d %d\n",i+1,count);
		}
}


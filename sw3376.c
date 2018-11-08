#include <stdio.h>
#include <stdlib.h>
int main(void){

		int num, n, i, j;
		long long *p;

		scanf("%d", &num);

		for(i=0; i<num; i++){

				scanf("%d", &n);
				
				p=(long long *)malloc(sizeof(long long)*n);
				
				

				for(j=0;j<n;j++){

						if(j>=3)
							p[j]=p[j-2]+p[j-3];
						else
							p[j]=1;

							
				}

				printf("#%d %lld\n", i+1, p[j-1]);
		}
}


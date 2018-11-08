#include <stdio.h>
#include <stdlib.h>

int main(void){

		int len, free=0;
		int* build;
		int i,j,k, a1,b1,a2,b2,a,b;

		for(i=0; i<10; i++){
			free=0;			
			scanf("%d", &len);
			build = (int*)malloc(sizeof(int)*len);
			
			for(j=0;j<len;j++)
					scanf("%d", build+j);

			for(j=2; j<len-2; j++){
					a1=build[j]-build[j+1];
					a2=build[j]-build[j+2];
					a=(a1>a2) ? a2 : a1;
					b1=build[j]-build[j-1];
					b2=build[j]-build[j-2];
					b=(b1>b2) ? b2 : b1;
					
					if(a2<0 || a1<0 || b2<0 || b1<0)
								continue;


					free+=(a>b) ? b : a;
			}

			printf("#%d %d\n", i+1, free);



					
			}

		}




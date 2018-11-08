#include <stdio.h>

int main(void){

		int num, n;
		int i,j,k;
		char deck[1000][80];

		scanf("%d", &num);

		for(i=1; i<=num; i++){

				scanf("%d", &n);

				for(j=0; j<n; j++){

						scanf("%s", deck[j]);

				}
				
				k=(n%2) ? n/2+1 : n/2;
				printf("#%d ", i);
				for(j=0; j<k;j++){
						
						
						printf("%s ",deck[j]);
						if(k+j<n)
							printf("%s ",deck[k+j]);
						
						
				}

				printf("\n");

		}
						

}

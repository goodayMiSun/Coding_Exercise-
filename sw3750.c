#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){


		char a[20]; 
		int f=0, k;
		int i,j,n,len;

		scanf("%d", &n);
		
		for(i=0; i<n; i++){
			
			f=0;

			scanf("%s", a);
			
			len=strlen(a);

			for(j=0;j<len;j++){
					
					f+=a[j]-48;
					printf("%d\n", a[j]-48);
			}


			while((f/10)!=0){
					k=0;
					while(f!=0){
						k+=f%10;
						f/=10;
					}

					f=k;
			}



			printf("#%d %d \n", i+1, f);

		}


					
}



		

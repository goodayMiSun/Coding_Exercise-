#include <stdio.h>
#include <stdlib.h>


int main(void){
		
		int i,j,k,h, num;
		char * a;
		int * b;

		for(i=0;i<10;i++){

				scanf("%d", &num);
			
				a=(char*)malloc(sizeof(char)*(num+1));
				
				b=(int*)malloc(sizeof(int)*num);
				
				scanf("%s", a);

				b[0]=a[0]-48;

				for(j=1,k=1;k<num;k++){

						if(a[k]-48==b[j-1]){
								
								j--;
						}

						else {
								b[j]=a[k]-48;
								j++;
						}

				}

				printf("#%d ", i+1);
				
				for(j=0;b[j]!=0;j++)
				printf("%d",b[j]);

		}
}

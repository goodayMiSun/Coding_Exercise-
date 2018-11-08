#include <stdio.h>

int main(void){

		int num,i,j,x,y;
		int x1,x2,y1,y2, a,b,n1,n2, n;


		scanf("%d",&num);

		for(i=0; i<num; i++){

				scanf("%d %d", &a, &b);
				
				for(j=1;j*(j+1)<2*a;j++);

				n1=j;

				for(j=1;j*(j+1)<2*b;j++);

				n2=j;
			
				
				y1=a-n1*(n1-1)/2; y2=b-n2*(n2-1)/2;

				x1=n1-y1+1; x2=n2-y2+1;
				
				x=x1+x2; y=y1+y2;

				n=x+y-1;

				printf("#%d %d\n",i+1, n*(n-1)/2+y);
		}


}

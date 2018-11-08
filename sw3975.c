#include <stdio.h>


int main(void){
	int i,n,a,b,c,d;
	double h,k;
	
	scanf("%d", &n);


	for(i=0;i<n;i++){

			scanf("%d %d %d %d", &a,&b,&c,&d);
			h=(double)a/b; k=(double)c/d;
	

			
			if(h==k) printf("#%d DRAW\n",i+1);
			else if(h>k) printf("#%d ALICE\n",i+1);
			else printf("#%d BOB\n",i+1);

	}


}
	

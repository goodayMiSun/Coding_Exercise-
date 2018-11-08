#include <stdio.h>


int fatten(int n, int hight[]);


int main(void){

	int i,j,k;
	int hight[100];
	int n;
	
	

	for(i=0;i<10;i++){

		scanf("%d", &n);
		
		for(j=0;j<100;j++)
			scanf("%d", hight+j);

		k = fatten(n,hight);
		printf("#%d %d\n",i+1 , k);
	}


}




int fatten(int n, int hight[]){
	int i, j, max, min, max1, min1;

	int answer;
	
	
		

	for(i=0;i<n;i++){
		max=hight[0];
		min=hight[0];
		min1=0;
		max1=0;

		for(j=0;j<100;j++){


			if(max<hight[j]){
				max=hight[j];
               			max1=j;
			}
		
			if(min>hight[j]){
				min=hight[j];
                		min1=j;
            		}
			
		}

		
		
		if(hight[max1]-hight[min1]<=1)
			break;
		
		hight[min1] = hight[min1] + 1;
        	hight[max1] = hight[max1] - 1;
			
			
		
	}

	max=hight[0];
	min=hight[0];

	for(j=0;j<100;j++){


			if(max<hight[j]){
				max=hight[j];
               			
			}
		
			if(min>hight[j]){
				min=hight[j];
                		
            		}
			
		}

    	answer=max-min;
   
 
	return answer;



}





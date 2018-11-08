#include <stdio.h>
#include <stdlib.h>

void  enter(long long* arr, long long en, int end){


		long long h;

		arr[end]= en;



		while(arr[end/2]<=arr[end] && end!=0){

				
				h=arr[end];
				arr[end]=arr[end/2];
				arr[end/2]=h;

				end/=2;
		}
		
	
}


int delete(long long* arr, int end){
		int i,k,j;
		long long a;

		
		if(end==0){
				printf("-1 ");
            	return end;
        }
		else
			printf("%lld ", arr[0]);

			

		arr[0]=arr[end-1];
		arr[end-1]=0;
		end--;
	
		for(i=0; 2*i<=end & 2*i+1<=end; ){
            
                  j=i;
            			 
			if(arr[2*i]>arr[2*i+1] && arr[2*i]>arr[i]){

					a=arr[2*i];
					arr[2*i]=arr[i];
					arr[i]=a;

					i=2*i;
			}

			else if(arr[2*i]<arr[2*i+1] && arr[2*i+1]>arr[i]){
					a=arr[2*i+1];
					arr[2*i+1]=arr[i];
					arr[i]=a;

					i=2*i+1;
			}
            
            if(j==i)
                break;
            
             
		}
    
    	if(2*i<=end &&  arr[2*i]>arr[i]){
            
           			a=arr[2*i];
					arr[2*i]=arr[i];
					arr[i]=a;

				
			}

			else if((2*i+1<=end &&  arr[2*i+1]>arr[i])){
					a=arr[2*i+1];
					arr[2*i+1]=arr[i];
					arr[i]=a;

				
			}
    return end;

}





		

int main(void){

		int i, j, h, k, what;
		int n,num, end;
		long long *arr,en, de;

		scanf("%d", &n);

		for(i=0; i<n;i++){
				printf("#%d ", i+1);
				end=0;
				scanf("%d", &num);

				arr = (long long *)malloc(sizeof(long long)*num);
				
				for(j=0; j<num; j++){
						
						scanf("%d", &what);
						

					if(what==1){

						scanf("%lld", &en);
						enter(arr, en, end);
						end++;



					}

				else{
						end = delete(arr, end);
						
				}
                 

				}

				printf("\n");
		}
}

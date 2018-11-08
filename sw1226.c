#include <stdio.h>

typedef struct function{

	int i;
	int j;

} func;	

int count;
int n;

func find(int road[][16], func start, func back[]);

int miro(int road[][16]){

	 
		int i, j,  node=0;
		func start, end , back[1000];
		n=0;
		for(i=0; i<16; i++){

				for(j=0; j<16; j++){
						if(road[i][j]==2){
								start.i=i; start.j=j;
						}

						if(road[i][j]==3){
								end.i=i; end.j=j;
						}


				}

		}

		while(1){

			start=find(road, start, back);
			
			
			if(end.i==start.i && end.j==start.j)
					return 1;

			

			if(count==0){
				start=find(road, start, back);
				
			}
			
			if(n==0 && count==0){
				return 0;
			}
			

		}

}

func find(int road[][16], func start, func back[]){
		
		int a=start.i, b=start.j;
		int c=start.i, d=start.j;
		func abc;
		count=0;
    		road[a][b]=1;
		
    	
		//four direction

		if(road[c+1][d]!=1){
				count++; a++;


				
		}

		if(road[c-1][d]!=1){

				count++; a--;


				
				if(count>1) a++;
		}

		if(road[c][d+1]!=1){
				count++; b++;

				if(count>1) b--;
		}
	
		if(road[c][d-1]!=1){
				count++; b--;


				if(count>1) b++;

		}
		
		//node check

		if (count>1){
				back[n].i=start.i; back[n].j=start.j;
				n++; 
				
		}

		//blocked
		

		if(a<0 || b<0){ count=0;  return start; }

		if(count==0){
				n--;
				if(n<0) n=0;
				abc.i=back[n].i; abc.j=back[n].j;
				

				a=abc.i; b=abc.j;
				
			}
		
			
			
		
		
		start.i=a; start.j=b;

		return start;

}

int main(void){


		int road[16][16];
    		char road1[17];
		int i,k, j, output, num;
		

		for(k=0; k<10; k++){
				
			scanf("%d", &num);
			    
		    for(i=0; i<16; i++){
		        scanf("%s", road1);
		        for(j=0; j<16; j++)
		                    road[i][j]=road1[j]-48;
		    }
			
			output = miro(road);

			printf("#%d %d\n",num, output);
		}
}





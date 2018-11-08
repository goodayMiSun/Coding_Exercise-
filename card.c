#include <stdio.h>
#include <stdlib.h>

typedef struct card {

	char a;
	int b,c;
}card;


int check(int pre[], int n,int chek[]);
int* number (char dek[]);

int main(void){
	
	int i,j,n, s,d,h,c ;
	char dek[3001];
	int* k=NULL;
	k=(int*)malloc(sizeof(int)*4);


	scanf("%d", &n);

	for(i=0;i<n;i++){

		scanf("%s", dek);
		
		k=number(dek);

		if(k!=NULL){
				printf("#%d %d %d %d %d\n", i+1,13-k[0],13-k[1],13-k[2],13-k[3]);
		}
		else
			printf("#%d ERROR\n",i+1);
		
	}
	
}


int* number (char dek[]){

	int chek_s[13]={0};
	int chek_d[13]={0};
	int chek_h[13]={0};
	int chek_c[13]={0};

	int i=0,j,k,n,num; 
	int * sdhc=NULL;
	card card1[1000];
	int* pre[4]={NULL};
	sdhc=(int*)malloc(sizeof(int)*4);

	for(i=0, j=0;dek[j]!='\0';i++,j++){
		
		card1[i].a=dek[j];
		card1[i].b=dek[++j]-48;
		card1[i].c=dek[++j]-48;
	}
	n=i;
	for(i=0;i<4;i++)
		pre[i]=(int*)malloc(sizeof(int)*13);
	
	for(i=0;i<n;i++){

		num=card1[i].b*10+card1[i].c-1;

		switch (card1[i].a){
			
			case 'S' : 
				k=check(pre[0], num, chek_s);
				sdhc[0]++;
				break;
			case 'D' :
				k=check(pre[1], num, chek_d);
				sdhc[1]++;
				break;
			case 'H' :
				k=check(pre[2], num,chek_h);
				sdhc[2]++;
				break;
			case 'C' :
				k=check(pre[3],num, chek_c);
				sdhc[3]++;
				break;
			default :
				break;
		}
	
		if(k==0)
			return NULL;
	}

	return sdhc;


}

int check(int pre[],int n, int chek[]){

	int i,j;



		if(chek[n]!=0)
			return 0;

		else 
			chek[n]=n;
	
	


	
	return 1;
}






















		

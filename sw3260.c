#include <stdio.h>
#include <stdlib.h>
int main(void){
	int num,i,j,s1,s2,g,h;

	char a[101]={0}, b[101]={0};
	char *c=(char*)malloc(sizeof(char)*101);

	scanf("%d", &num);

	for(i=0;i<num;i++){

		scanf("%s %s",a,b);
			
		for(j=0;a[j]!='\0';j++)
		s1=j;	

		for(j=0;b[j]!='\0';j++)
		s2=j;

		if(s1>s2){
			 g=s2; c=a; h=s1; }
		else {	g=s1; c=b; h=s2;}
		printf("%d\n",g);
		printf("#%d ", i+1);

		for(j=0;j<=g;j++)
			c[h-j]=a[s1-j]+b[s2-j]-48;
		
		for(j=0;j<=h;j++){
			if(c[h-j]>=58 && h-j !=0){
				c[h-j]-=10;
				c[h-j-1]++;
			}
		}

		for(j=0;c[j]!='\0';j++)

			printf("%d",c[j]-48);
		printf("\n");
	
	}
}

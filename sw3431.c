#include <stdio.h>


int main(void){

		long long l,u,x, need;

		int n,i;
		scanf("%d", &n);

		for(i=1;i<=n; i++){

				scanf("%lld %lld %lld",&l, &u, &x);

				if(x<l) need=l-x;
				else if(x>u) need=-1;
				else
						need=x-l;

				printf("#%d %d", i, need);
		}
}
// 이야ㅑㅏㅏㅏㅏㅏㅏㅏ 6등으으으으으으ㅡ

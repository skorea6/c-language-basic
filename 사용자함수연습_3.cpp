#include <stdio.h>

void square(int n){
	int i,j;
	for(i=1;i<=n*n;i++){
		printf("%d ",i);
		if(i%n==0){
			printf("\n");
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	square(n);
}

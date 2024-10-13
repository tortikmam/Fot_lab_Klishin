//13 задание

#include <stdio.h>

void main(){

	int n;

	scanf("%d", &n);

	if((n & (n - 1)) == 0){

	printf("YES\n");

	}else{

	printf("NO\n");

	}

}

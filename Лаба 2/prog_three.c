#include <stdio.h>

void main(){

	float x;
	float y;
	int count;

	scanf("%f", &x);
	scanf("%f", &y);

	if (x < 0 || y < 0){

	count++;

	}

	if (x * x + y * y < 1 && (x >= 0.5 || y >= 0.5) && count != 1){

	printf("YES\n");

	}else{

	printf("NO\n");

	}
}

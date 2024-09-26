#include <stdio.h>

void main(){

	int a;
	int n;

	scanf("%d", &a);

	for (n = 2; n < a; n++){

		if (a % n == 0){

			break;

		}
	}

	if (n == a){

	puts("GOOD");

	}
}
// Простые числа

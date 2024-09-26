#include <stdio.h>

void main(){

	int s = 0;
	int a;

	scanf("%d", &a);

	for (int n = 2; n < a; n++){

		if (a % n == 0){

			s++;

		}

	}

	if (s == 0){

	puts("GOOD");

	}


}
// Простые числа

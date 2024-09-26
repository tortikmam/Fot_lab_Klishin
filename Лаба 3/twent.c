#include <stdio.h>

void main(){

	int a;
	int s = 0;
	int k;

	scanf("%d", &a);

	for (int n = a; n != 0; n = n / 10){

	k = n % 10;
	s = s + k;

	printf("%d, %d\n", k, s);

	}

}
// Складывает цифры

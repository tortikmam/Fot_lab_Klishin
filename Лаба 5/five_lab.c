//12 задание

#include <stdio.h>

void main(){

	int start;

	scanf("%d", &start);

	int help = 0xff;
	int between = (start & help) << 8;
	int end = between | (start >> 8);

	for (int i = sizeof(end) * 8 - 1; i >= 0; i--){
		printf("%d", (end >> i) & 1);
		}

	printf("\n");

	printf("%d\n", end);

}

#include <stdio.h>

void main(){

	int count;
	float temp;
	char ch;

	printf("Input temperature: ");
	scanf("%f%c", &temp, &ch);

	if (ch == 'c' || ch == 'C'){

	temp = 1.8 * temp + 32;
	ch = 'f';

	}else if (ch == 'f' || ch == 'F'){

	temp = (temp - 32) / 1.8;
	ch = 'c';

	}else{

	printf("ERROR");
	count++;

	}

	if (count != 1){

	printf("Output temperature: %.1f%c\n", temp, ch);

	}
}

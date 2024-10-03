#include <stdio.h>

void main(){

	char a = 'A';
	char b = 'A';

	int count = 10;

	while (count != 0){

		for (int i = 0; i != count; i++){

			if (i != count - 1){

				printf("%c", b);

			}else{

				printf("%c\n", b);

			}

			b++;


		}

	count--;
	a++;
	b = a;


	}
}

#include <stdio.h>

void main(){

	int size;

	int x;
	int y;
	int z;

	int rez;
	float rez_x;
	float rez_y;
	float rez_z;

	int eqival;

	int for_size = 0;
	int for_size_two = 0;

	printf("Введите размер матрицы:\n");

	scanf("%d", &size);

	int matrix[size][size + 1];

	for (int i = 0; i < size; i++){
		
		if (size == 2){

			printf("Введите x для %d уравнения\n", (i + 1));
			scanf("%d", &x);
			matrix[for_size][for_size_two] = x; // 0 0   1 1
			for_size_two ++;

			printf("Ведите y для %d уравнения\n", (i + 1));
			scanf("%d", &y);
			matrix[for_size][for_size_two] = y; // 0 1   1 2
			for_size_two ++;

			printf("Ведите Чему равно уравнение %d\n", (i + 1));
			scanf("%d", &eqival);
			matrix[for_size][for_size_two] = eqival; // 0 2   1 3
			for_size_two = 0;
			for_size ++;

		}else if(size == 3){

			printf("Введите x для %d уравнения\n", (i + 1));
			scanf("%d", &x);
			matrix[for_size][for_size_two] = x; // 0 0   1 1
			for_size_two ++;

			printf("Ведите y для %d уравнения\n", (i + 1));
			scanf("%d", &y);
			matrix[for_size][for_size_two] = y; // 0 1   1 2
			for_size_two ++;

			printf("Ведите z для %d уравнения\n", (i + 1));
			scanf("%d", &z);
			matrix[for_size][for_size_two] = z; // 0 2   1 2
			for_size_two ++;

			printf("Ведите Чему равно уравнение %d\n", (i + 1));
			scanf("%d", &eqival);
			matrix[for_size][for_size_two] = eqival; // 0 3   1 3
			for_size_two = 0;
			for_size ++;

		}
	}


	if (size == 2){

		rez = (matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]);

		if (rez != 0){

		rez_x = (matrix[0][2] * matrix[1][1]) - (matrix[1][2] * matrix[0][1]);
		rez_y = (matrix[0][0] * matrix[1][2]) - (matrix[1][0] * matrix[0][2]);

		rez_x = rez_x / rez;
		rez_y = rez_y / rez;

		printf("x = %f; y = %f\n", rez_x, rez_y);
		}else{
			printf("Система не имеет решений или имеет множество решений\n");
		}

	}else if(size == 3){

		rez = (matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][2]*matrix[1][0]*matrix[2][1] + matrix[0][1]*matrix[1][2]*matrix[2][0])
		 - (matrix[0][2] * matrix[1][1] * matrix[2][0] + matrix[0][0]*matrix[1][2]*matrix[2][1] + matrix[0][1]*matrix[1][0]*matrix[2][2]);

		if (rez != 0){

		rez_x = (matrix[0][3] * matrix[1][1] * matrix[2][2] + matrix[0][2]*matrix[1][3]*matrix[2][1] + matrix[0][1]*matrix[1][2]*matrix[2][3])
		 - (matrix[0][2] * matrix[1][1] * matrix[2][3] + matrix[0][3]*matrix[1][2]*matrix[2][1] + matrix[0][1]*matrix[1][3]*matrix[2][2]);

		rez_y = (matrix[0][0] * matrix[1][3] * matrix[2][2] + matrix[0][2]*matrix[1][0]*matrix[2][3] + matrix[0][3]*matrix[1][2]*matrix[2][0])
		 - (matrix[0][2] * matrix[1][3] * matrix[2][0] + matrix[0][0]*matrix[1][2]*matrix[2][3] + matrix[0][3]*matrix[1][0]*matrix[2][2]);

		rez_z = (matrix[0][0] * matrix[1][1] * matrix[2][3] + matrix[0][3]*matrix[1][0]*matrix[2][1] + matrix[0][1]*matrix[1][3]*matrix[2][0])
		 - (matrix[0][3] * matrix[1][1] * matrix[2][0] + matrix[0][0]*matrix[1][3]*matrix[2][1] + matrix[0][1]*matrix[1][0]*matrix[2][3]);

		rez_x = rez_x / rez;
		rez_y = rez_y / rez;
		rez_z = rez_z / rez;

		printf("x = %f; y = %f; z =%f\n", rez_x, rez_y, rez_z);
		}else{
			printf("Система не имеет решений или имеет множество решений\n");
		}
	}

}

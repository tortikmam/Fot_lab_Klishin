#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 5

int zapolnenie_random(int sizee, int A[sizee][sizee]){

    srand(time(NULL));

    int a = rand() % 100;
    
    for (int i = 0; i < sizee; i++){
        for (int j = 0; j < sizee; j++){
            A[i][j] = a;
            a = rand() % 100;
        }
    }

} 

int zapolnenie_hands(int sizee, int A[sizee][sizee]){

    int el;

    for (int i = 0; i < sizee; i++){
        for (int j = 0; j < sizee; j++){
            printf("Введите элемент А[%d][%d]: ", i, j);

            scanf("%d", &el);

            A[i][j] = el;
        }
    }

} 

int min_(int sizee, int A[sizee][sizee]){

    int _min = A[0][0];

     for (int i = 0; i < sizee; i++){
        for (int j = 0; j < sizee; j++){
            if(_min > A[i][j]){
                _min = A[i][j];
            }
        }
    }

    return _min;
}

int for_lich_zadanie(int sizee, int A[sizee][sizee], int C[sizee][sizee],int _min){

    for (int i = 0; i < sizee; i++){
        for (int j = 0; j < sizee; j++){
            C[i][j] = A[i][j];
        }
    }

    for (int i = 0; i < sizee; i++){
        for (int j = 0; j < sizee; j++){

               if (A[i][j] == _min){
                    for (int x = 0; x < sizee; x++){
                        C[i][x] = 0;
                    }

                    for (int y = 0; y < sizee; y++){
                        C[y][j] = 0;
                    }
               }
         }
    }
}

int schet(int sizee, int C[sizee][sizee]){

    int count = 0;

    for (int i = 0; i < sizee; i++){
        for (int j = 0; j < sizee; j++){
            if (C[i][j] == 0){
                count++;
            }
        }
    }

    return count;

}

int zamena(int sizee, int C[sizee][sizee]){

    int t[1][sizee];

    for (int i = 0; i < sizee; i++){
        t[0][i] = C[0][i];
    }

    for (int x = 0; x < sizee; x++){
        C[0][x] = C[sizee - 1][x];
    }

    for (int y = 0; y < sizee; y++){
        C[sizee - 1][y] = t[0][y];
    }
}

void main(){

    int size;
    int min;
    int count_zero;
    char command;

    printf("Заполнить матрицу случайными элементами?(Y or N): ");
    scanf("%c", &command);

    printf("Введите размер массива А: ");
    scanf("%d", &size);
    printf("\n");

    if (size > 0 && (command == 'Y' || command == 'N')){

        int A[size][size];
        int C[size][size];

        if (command == 'Y'){
            zapolnenie_random(size, A);
        }else if (command == 'N'){
            zapolnenie_hands(size, A);
        }

        min = min_(size, A);

        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                printf("%d ", A[i][j]);

            }
            printf("\n");

        }  

        printf("\n");    

        for_lich_zadanie(size, A, C, min);
        zamena(size, C);

        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                printf("%d ", C[i][j]);

            }
            printf("\n");

        }

        count_zero = schet(size, C);

        printf("Количество нулей: %d\n", count_zero);

    }else{
        printf("Некоректный формат ввода\n");
    }

}
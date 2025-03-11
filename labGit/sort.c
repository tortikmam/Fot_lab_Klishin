#include <stdio.h>
#include <wchar.h>
#include <locale.h>



void SelectionSort(int A[], int n, int *C, int *M) {

    *C = 0;
    *M = 0;

    for (int i = 0; i < n - 1; i++) {

        int k = i;

        for (int j = i + 1; j < n; j++) {

            (*C)++;

            if (A[j] < A[k]) {
                k = j;
            }

        }
        
        int temp = A[i];
        A[i] = A[k];
        A[k] = temp;
        *M += 3;

    }
}

void UpdateSelectionSort(int A[], int n, int *C, int *M) {

    *C = 0;
    *M = 0;

    for (int i = 0; i < n - 1; i++) {

        int k = i;

        for (int j = i + 1; j < n; j++) {

            (*C)++;

            if (A[j] < A[k]) {
                k = j;
            }

        }

        if (k != i) {

            int temp = A[i];
            A[i] = A[k];
            A[k] = temp;
            *M += 3;

        }
    }
}

void FillInc(int A[], int n){

    for (int i = 0; i < n; i++){
        A[i] = i; 
    }

}

void FillDec(int A[], int n){

    for (int i = 0; i < n; i++){
        A[i] = n - i; 
    }

}

void FillRand(int A[], int n){

    for (int i = 0; i < n; i++){
        int random = rand();
        A[i] = random;
    }
    
}

int CheckSum(int A[], int n){

    unsigned int sum = 0;

    for (int i = 0; i < n; i++){
        sum = sum + A[i];
    }

    return sum;
}

int RunNumber(int A[], int n){

    int count = 1;

    for (int i = 0; i < n; i++){

        if (A[i] < A[i - 1]){
            count++;
        }

    }

    return count;

}

void PrintMas(int A[], int n){

  for (int i = 0; i < n; i++){
    printf("%d ", A[i]);
  }

    printf("\n");

}

void TeorTable() {
    printf("%-5s | %-10s | %-10s %-10s %-10s | %-10s %-10s %-10s\n", "N", "M+C теор.", "Убыв.", "Случ.", "Возр.", "Убыв.", "Случ.", "Возр.");
    printf("%-5s | %-10s | %-10s %-10s %-10s | %-10s %-10s %-10s\n", "", "", "Исх.", "Исх.", "Исх.", "Улучш.", "Улучш.", "Улучш.");
    printf("----------------------------------------------------------------------------------------------------------\n");
}

void ZnachTable(int n, int M_C, int C1, int M1, int C2, int M2, int C3, int M3, int C4, int M4, int C5, int M5, int C6, int M6) {
    printf("%-5d | %-10d | %-10d %-10d %-10d | %-10d %-10d %-10d\n", n, M_C, C1 + M1, C2 + M2, C3 + M3, C4 + M4, C5 + M5, C6 + M6);
    printf("----------------------------------------------------------------------------------------------------------\n");
}

int main() {

    srand(time(NULL));

    int n = 10;
    int b = 100;
    int A[n];
    int L[b];
    int C1, M1, C2, M2, C3, M3, C4, M4, C5, M5, C6, M6;

    // n
    int C_N = ((n*n - n) / 2);
    int M_N = 3*(n-1);
    int M_C = C_N + M_N;
    

    // b
    int C_B = ((b*b - b) / 2);
    int M_B = 3*(b-1);
    int MC = C_B + M_B;

    // n
    TeorTable();

    FillDec(A, n);
    SelectionSort(A, n, &C1, &M1);
    FillRand(A, n);
    SelectionSort(A, n, &C2, &M2);
    FillInc(A, n);
    SelectionSort(A, n, &C3, &M3);
    
    FillDec(A, n);
    UpdateSelectionSort(A, n, &C4, &M4);
    FillRand(A, n);
    UpdateSelectionSort(A, n, &C5, &M5);
    FillInc(A, n);
    UpdateSelectionSort(A, n, &C6, &M6);

    ZnachTable(n, M_C, C1, M1, C2, M2, C3, M3, C4, M4, C5, M5, C6, M6);

    // bё

    FillDec(L, b);
    SelectionSort(L, b, &C1, &M1);
    FillRand(L, b);
    SelectionSort(L, b, &C2, &M2);
    FillInc(L, b);
    SelectionSort(L, b, &C3, &M3);
    
    FillDec(L, b);
    UpdateSelectionSort(L, b, &C4, &M4);
    FillRand(L, b);
    UpdateSelectionSort(L, b, &C5, &M5);
    FillInc(L, b);
    UpdateSelectionSort(L, b, &C6, &M6);

    ZnachTable(b, MC, C1, M1, C2, M2, C3, M3, C4, M4, C5, M5, C6, M6);
    
}

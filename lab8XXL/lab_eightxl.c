#include <stdio.h>
int main() {
    int size;
    printf("Введите размер матрицы: ");
    scanf("%d", &size);
    int matrix[size][size];

    for (int i = 0; i < size; i++) { // Вводим пустую матрицу
        for (int j = 0; j < size; j++) {
            matrix[i][j] = 0;
        }
    }
    
    int k = 1; // ЦИКЛ ДЛЯ ЗАПОЛНЕНИЯ
    int kon = 0; // Верхняя граница
    int nach = size - 1; // Нижняя граница    тк счет с нуля
    int left = 0; // Левая граница
    int right = size - 1; // Правая граница

    while (kon <= nach & left <= right) {

        for (int j = left; j <= right; j++) { // Заполняем верхнюю строку
            matrix[kon][j] = k++;
        }
        kon++;

        for (int i = kon; i <= nach; i++) {  // Заполняем правый столбец
            matrix[i][right] = k++;
        }
        right--;

        if (kon <= nach) {  // Заполняем нижнюю строку
            for (int j = right; j >= left; j--) {
                matrix[nach][j] = k++;
            }
            nach--;
        }

        if (left <= right) { // Заполняем левый столбец
            for (int i = nach; i >= kon; i--) { 
                matrix[i][left] = k++;
            }
            left++;
        }
    }

    
    for (int i = 0; i < size; i++) { // Вывод
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
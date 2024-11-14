#include <stdio.h>

int main() {
    int size_ar; // Переменная для хранения размера массивов
    printf("Введите размер массивов: ");
    scanf("%d", &size_ar);
    
    int ar_a[size_ar]; // Массив A
    int ar_b[size_ar]; // Массив B

    // Ввод значений для массива A
    printf("Значения для массива A:\n");
    for (int i = 0, c = 0; i < size_ar; i += 2, c++) {
        printf("Элемент номер: %d\n", c);
        int temp_a, temp_b; // Временные переменные для ввода
        printf("    a = ");
        scanf("%d", &temp_a);
        printf("    b = ");
        scanf("%d", &temp_b);
        ar_a[i] = temp_a;       // Сохранение значения a
        ar_a[i + 1] = temp_b;   // Сохранение значения b
    }

    // Ввод значений для массива B
    printf("Значения для массива B:\n");
    for (int i = 0, c = 0; i < size_ar; i += 2, c++) {
        printf("Элемент номер: %d\n", c);
        int temp_a, temp_b; // Временные переменные для ввода
        printf("    a = ");
        scanf("%d", &temp_a);
        printf("    b = ");
        scanf("%d", &temp_b);
        ar_b[i] = temp_a;       // Сохранение значения a
        ar_b[i + 1] = temp_b;   // Сохранение значения b
    }

    // Суммирование массивов A и B в массив C
    int ar_c[size_ar];
    printf("Массив C: ");
    for (int i = 0; i < size_ar; i++) {
        ar_c[i] = ar_b[i] + ar_a[i]; // Сумма элементов массивов
        printf("%d ", ar_c[i]); // Вывод значений массива C
    }
    printf("\n");

    // Поиск максимального элемента массива A
    int max_a = ar_a[0];
    for (int i = 0; i < size_ar; i += 2) {
        if (max_a < ar_a[i]) {
            max_a = ar_a[i]; // Обновление максимума
        }
    }
    printf("Максимальное значение для A = %d\n", max_a);

    // Подсчет отрицательных значений в массиве B
    int count_m = 0;
    for (int i = 1; i < size_ar; i += 2) {
        if (ar_b[i] < 0) {
            count_m++; // Увеличиваем счетчик для отрицательных
        }
    }
    printf("Количество отрицательных значений для B = %d\n", count_m);

    // Вычисление среднего арифметического для массива C
    float midle = 0;
    for (int i = 0; i < size_ar; i++) {
        midle += ar_c[i]; // Суммируем элементы массива C
    }
    midle /= size_ar; // Делим сумму на количество элементов
    printf("Среднее арифметическое = %f\n", midle);

    return 0; // Успешное завершение программы
}
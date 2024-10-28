#include <stdio.h>

void func(char input[], char output[]) {
    int i = 0, j = 0;

    while (input[i] != '\0') {

        if (input[i] != ' ') {

            if (j == 0 || output[j - 1] == ' ') {
                output[j++] = '?';
            }
            output[j++] = input[i];
        } else {
            output[j++] = ' ';
        }
        i++;
    }
    output[j] = '\0';
}

int main() {
    char input[256];
    char output[512];

    printf("Введите предложение: ");
    fgets(input, sizeof(input), stdin);

    func(input, output);

    printf("Результат: %s\n", output);

    return 0;
}

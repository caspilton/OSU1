#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <memory.h>
#include <stdbool.h>

int main() {
    const unsigned short DIGITS_AMOUNT = 9;

    unsigned int length;
    printf("Enter a length of numbers: ");
    scanf("%d", &length);

    // Текущее число { 1, 2, ..., length }
    unsigned short* number = (unsigned short*)calloc(length, sizeof(unsigned short));
    for (int i = 0; i < length; i++)
        number[i] = i + 1;

    while (true) {
        // Выводим текущее число
        for (int i = 0; i < length; i++)
            printf("%d", number[i]);
        printf("\n");

        // Если цифра младшего разряда меньше 9, то прибавляем к числу единицу
        if (number[length - 1] < DIGITS_AMOUNT) {
            number[length - 1]++;
        }
        // Иначе
        else {
            int k;                               // Индекс изменяемого разряда
            for (k = length - 1; k > 0; k--)     // Движемся от младшего разряда ко второму разряду
                if (number[k] - number[k - 1] > 1) // Если разница между текущим и старшим разрядом больше единицы
                    break;                           // Прерываемся, тем самым "запоминая" необходимый разряд
            if (k == 0) break;                   // Если подходящего разряда не нашлось, завершаем выполнение программы
            number[k - 1] ++;                    // Иначе к левому от найденного разряда прибавляем единицу

            // Восстанавливаем младшие от найденного разряды
            for (int i = k; i < length; i++)
                number[i] = number[i - 1] + 1;
        }
    }
}

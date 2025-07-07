#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru");
    int t1, t2, t3;
    printf("Enter three numbers:\n");
    scanf_s("%d %d %d", &t1, &t2, &t3);
    double rate = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    double time = 1.0 / rate;

    printf("time to eat: %.2f hours\n", time);

    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX 14


long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; ++i)
        res *= i;
    return res;
}

int main() {
    char word[MAX + 1];
    int freq[256] = { 0 };
    scanf_s("%s", word);

    int len = strlen(word);

    for (int i = 0; i < len; ++i) {
        freq[(unsigned char)word[i]]++;
    }

    long long total = factorial(len);

    for (int i = 0; i < 256; ++i) {
        if (freq[i] > 1) {
            total /= factorial(freq[i]);
        }
    }

    printf("%lld\n", total);
    return 0;
}

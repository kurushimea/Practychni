#include <stdio.h>
#include <math.h>

int min_steps(int x, int y) {
    long long dist = y - x;
    long long step = 0;
    long long sum = 0;

    while (sum < dist) {
        step++;
        sum += step * 2; 
    }


    if (sum - step >= dist)
        return step * 2 - 1;
    else
        return step * 2;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", min_steps(x, y));
    return 0;
}
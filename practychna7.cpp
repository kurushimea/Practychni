#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, r1, x2, y2, r2;
    scanf_s("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    double dx = x2 - x1;
    double dy = y2 - y1;
    double d = sqrt(dx * dx + dy * dy);

    if (d == 0 && r1 == r2) {
        printf("-1\n");
    }
    else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        printf("0\n");
    }
    else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        printf("1\n");
    }
    else {
        printf("2\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int mod = 12345;
    int** dp = malloc((n + 1) * sizeof(int*));
    for (int i = 0; i <= n; i++)
        dp[i] = malloc(3 * sizeof(int));

    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 0;

    for (int i = 2; i <= n; i++) {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % mod;
        dp[i][1] = dp[i - 1][0];
        dp[i][2] = dp[i - 1][1];
    }

    int result = (dp[n][0] + dp[n][1] + dp[n][2]) % mod;
    printf("%d\n", result);

    for (int i = 0; i <= n; i++) free(dp[i]);
    free(dp);
    return 0;
}
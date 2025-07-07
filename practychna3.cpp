#include <stdio.h>

long long dp[31][2][3];

int p;


long long count(int pos, int last_digit,int count_same) {
    if (count_same == 3) return 0; 
    if (pos == p) return 1;      

    if (dp[pos][last_digit][count_same] != -1)
        return dp[pos][last_digit][count_same];

    long long res = 0;
    
   
    if (last_digit == 0)
        res += count(pos + 1, 0, count_same + 1); 
    else
        res += count(pos + 1, 0, 1); 

 
    if (last_digit == 1)
        res += count(pos + 1, 1, count_same + 1); 
    else
        res += count(pos + 1, 1, 1); 

    return dp[pos][last_digit][count_same] = res;
}

int main() {
    scanf_s("%d", &p);


    for (int i = 0; i <= p; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 3; k++)
                dp[i][j][k] = -1;


    long long result = count(1, 0, 1) + count(1, 1, 1);

    printf("%lld\n", result);
    return 0;
}

#include <stdio.h>

int main(void) {
    int N;
    int a;
    int map[21][21];
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a);
            if (i == 0 && j == 0)map[i][j] = a;
            else if (i == 0) map[i][j] = map[i][j - 1] + a;
            else if (j == 0) map[i][j] = map[i - 1][j] + a;
            else {
                if (map[i - 1][j] > map[i][j - 1])map[i][j] = map[i][j - 1] + a;
                else map[i][j] = map[i - 1][j] + a;
            }
        }
    }
    printf("%d", map[N - 1][N - 1]);
    return 0;
}
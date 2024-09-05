#include <stdio.h>

int main(){
    int N, A, B, SUM;
    scanf("%d", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%d %d", &A, &B);
        SUM = A + B;
        printf("%d\n", SUM);
    }

    return 0;
}
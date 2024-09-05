#include <stdio.h>

int main(){
    int N, A, B;
    scanf("%d", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%d %d", &A, &B);
        if (A > B) {
            printf("%d %d\n", A, B);
        } else {
            printf("%d %d\n", B, A);
        }
    }
    return 0;
}
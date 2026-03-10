#include <stdio.h>

#define N 3
#define M 4

int main(){

    int A[N][M] = {{1, 1, 3, 4}, {3, 2, 1, 8}, {6, 2, 5, 1}};

    int max_i = 0;
    int max_j = 0;
    
    for (int i = 0; i < N; i++){

        int row_i = i;
        int row_j = 0;

        for (int j = 0; j < M; j++){
            if (A[i][j] < A[row_i][row_j]){
                row_i = i;
                row_j = j;
            }
        }

        if (A[row_i][row_j] > A[max_i][max_j]){
            max_i = row_i;
            max_j = row_j;
        }

    }

    printf("%d %d", max_i, max_j);

    return 0;
}
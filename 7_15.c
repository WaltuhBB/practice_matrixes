#include <stdio.h>

#define M 3

int main(){
    
    int A[M][M] = {{3, 2, 1}, {1, 2, 3}, {3, 2, 1}};
    
    int top = 0;
    int bottom = M - 1;
    
    int left = 0;
    int right = M - 1;
    
    while (top <= bottom && left <= right) {
        
        for (int j = left; j <= right; j++) {
            printf("%d ", A[top][j]);
        }
        top++;
        
        
        for (int i = top; i <= bottom; i++) {
            printf("%d ", A[i][right]);
        }
        right--;
        
    }
    
    return 0;
}
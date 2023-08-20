#include<stdio.h>

int main() {
    int i, j, k;
    
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i * 6; j++) {
            if (i == 3 && j <= 6) {
                printf("*");
            } else {
                printf("j");
            }
            if (j % 3 == 0) {
                printf("\n");
            }
        }
        
        printf("\n");
        
        for (k = 1; k <= i; k++) {
            if (i == 3) {
                break;
            }
            printf("k");
            printf("\n");
        }
    }
    
    return 0;
}

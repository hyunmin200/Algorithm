#include <stdio.h>
#include <string.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int t = n; t > i+1; t--) {
            printf(" ");
        }
        for (int j = 0; j <= i * 2; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    while(scanf("%d", &n) != EOF) {
        int *data = (int*) malloc(sizeof(int) * n);
        for (int i=0;i<n;i++) {
            scanf("%d", &data[i]);
        }
        
        free(data);
        printf("\n");
    }
    return 0;
}
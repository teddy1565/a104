#include <stdio.h>
#include <stdlib.h>

int *sort(int *m, int length) {
    for (int current=0;current<length;current++) {
        int temp = 0;
        for (int match=0;match<length;match++) {
            if (match == current) {
                continue;
            }
            if (m[current] < m[match]) {
                temp = m[current];
                m[current] = m[match];
                m[match] = temp;
                temp = 0;
            }
        }
    }
    return m;
}

int main(void) {
    int n=0;
    while(scanf("%d", &n) != EOF) {
        int *m = (int*) malloc(sizeof(int)*n);
        for (int i=0;i<n;i++) {
            scanf("%d", &m[i]);
        }
        int *answer = sort(m,n);
        for (int i=0;i<n;i++) {
            printf("%d ", answer[i]);
        }
        printf("\n");
        free(m);
    }
    return 0;
}